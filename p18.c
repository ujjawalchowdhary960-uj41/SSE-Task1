#include<stdio.h>
int staircase(int n){
    int i,j;
    for (i=1;i<=n;i++){
        for (j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int a=3;
    staircase(a);
    return 0;
}