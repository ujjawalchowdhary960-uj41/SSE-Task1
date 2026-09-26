#include<stdio.h>
int factorial(int a){
    if (a==1 || a==0){
        return 1;
    }
    return a * factorial(a-1);
}
int main(){
    int n;
    printf("enter the number whose factorial is to be printed:");
    scanf("%d",&n);
    printf("the factorial of %d is %d",n,factorial(n));
    return 0;
}