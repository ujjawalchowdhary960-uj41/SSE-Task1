#include<stdio.h>
int main(){
    int i=1,mul,sum=0;
    int n = 8;
    do
    {
        mul=n*i;
        sum+=mul;
        i++;
    }while (i<11);
    printf("the sum of 8 multiples %d", sum);
}