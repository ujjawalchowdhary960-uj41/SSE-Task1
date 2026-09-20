#include<stdio.h>
int main(){
    int i=1;
    int sum=0;
    do
    {
        sum+=i;
        i++;
    }while (i<6);
    printf("the sum is %d\n", sum);
}