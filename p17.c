#include<stdio.h>
int sum_naturalno(int n){
    if (n == 1){
        return 1;
    }
    return n+sum_naturalno(n-1);
}
int main(){
    int a;
    printf("the no of natural numbers whose sum is to be printed:");
    scanf("%d",&a);
    printf("the sum of the %d natural numbers is:%d",a,sum_naturalno(a));
    return 0;
}