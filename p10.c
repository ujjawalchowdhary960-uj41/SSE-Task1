#include<stdio.h>
int main(){
    int n = 5; 
    for(int i=10;i;i--){
        printf("%d X %d = %d\n", n,i,n*i);
    }
    return 0;
}