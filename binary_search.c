#include<stdio.h>
int binarysrh(int arr[],int size,int element){
    int i,low,high,mid;
    low=0;
    high=size-1;
    while(low<=high){
        mid=(high+low)/2;
        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int a,i;
    int arr[]={50,89,169,238,383,456,586,658,728,848,989,999};
    int size = sizeof(arr)/sizeof(int);
    int element = 658;
    a=binarysrh(arr,size,element);
    if (a!=-1){
        printf("the element is found at index %d",a);
    }
    else{
        printf("element not found");
    }
    return 0;
}