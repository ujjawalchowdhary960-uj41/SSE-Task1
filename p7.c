#include<stdio.h>
int main(){
    int i,n,max;
    printf("enter the first number:");
    scanf("%d",&max);
    for (i=2;i<=10;i++){
        printf("enter the number %d:",i);
        scanf("%d",&n);

        if (n>max){
            max=n;
        }
    }
    printf("the greatest among 10 is %d", max);
    
    return 0;
}