#include<stdio.h>
int main(){
    int a,b,result;
    char ch;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("enter the operation to be done (+,-,/,*):");
    scanf(" %c",&ch);
    if (ch=='+'){
        result=a+b;
        printf("the output is %d", result);
    }
    else if (ch=='-'){
        if (a>b){
            result=a-b;
            printf("the result is %d", result);
        }
        else{
            result=b-a;
            printf("the result is %d", result);
        }
    }
    else if(ch=='*'){
        result=a*b;
        printf("the result is %d", result);
    }
    else{
        if (b==0){
            printf("invalid input");
        }
        else {
            result=a/b;
            printf("the result is %d", result);
        }
    }
    return 0;
}