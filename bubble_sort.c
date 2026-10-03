#include<stdio.h>
int printarr(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
}
int swaper(int* a,int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void bubblesort(int arr[],int n){
    int i,j;
    for (i=0;i<n-1;i++){
        for (j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swaper(&arr[j],&arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[]={56,67,89,54,68};
    int n=sizeof(arr)/sizeof(int);
    printarr(arr,n);
    bubblesort(arr,n);
    printarr(arr,n);
    return 0;
}