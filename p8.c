#include<stdio.h>
int main(){
    int a,b,c,result;
    printf("enter the principal amount:");
    scanf("%d",&a);
    printf("enter the rate of interest:");
    scanf("%d",&b);
    printf("enter the time to repay:");
    scanf("%d",&c);
    result=(a*b*c)/100;
    printf("the simple interest is %d",result);
    return 0;
}