#include<stdio.h>
int main(){
    int n,i,arr[10];
    for (i=0;i<10;i++){
        arr[i]=(i+1)*5;
    }
    printf("%d",arr[0]);
    return 0;
}