#include<stdio.h>
int printarr(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
}
void insertionsort(int arr[],int n){
    int i,j;
    for(i=1;i<n;i++){
      int curr = arr[i];
      int prev = i-1;
      while (prev >= 0 && arr[prev] > curr){
        arr[prev+1]=arr[prev];
        prev--;
      }
      arr[prev+1]=curr;
    }  
}
int main(){
    int arr[]={56,67,89,54,68};
    int n=sizeof(arr)/sizeof(int);
    printarr(arr,n);
    insertionsort(arr,n);
    printarr(arr,n);
    return 0;
}
