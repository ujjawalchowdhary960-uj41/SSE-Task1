#include<stdio.h>
void reverse(int a[],int n){
    int i,temp;
    for(i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
}
void printarr(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    printarr(arr,6);
    reverse(arr,6);
    printarr(arr,6);
}