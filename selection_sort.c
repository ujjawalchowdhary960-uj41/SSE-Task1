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
void selectionsort(int arr[],int n){
    int i,j;
    for (i=0;i<n-1;i++){
        int small_index = i;
        for (j=i+1;j<n;j++){
            if(arr[j]<arr[small_index]){
                small_index = j;
            }
        }
        swaper(&arr[small_index],&arr[i]);
    }
}
int main(){
    int arr[]={4,1,5,2,3};
    int n=sizeof(arr)/sizeof(int);
    printarr(arr,n);
    selectionsort(arr,n);
    printarr(arr,n);
    return 0;
}