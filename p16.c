#include<stdio.h>
int fibonacci(int a){
    if (a == 1 || a == 2){
        return (a-1);
    }
    return fibonacci(a-1)+fibonacci(a-2);
}
int main(){
    int n;
    printf("enter the place of the element to be printed:");
    scanf("%d",&n);
    printf("%d",fibonacci(n));
    return 0;
}

