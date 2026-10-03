#include<stdio.h>
int linearsrh(int arr[], int size, int element){
    int i;
    for (i=0;i<size;i++){
        if (arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
    int a,i;
    int arr[]={50,89,69,38,83,56,86,58,28,48,89,78};
    int size = sizeof(arr)/sizeof(int);
    int element = 58;
    a=linearsrh(arr,size,element);
    if (a!=-1){
        printf("the element is found at index %d", a);
    }
    else{
        printf("the element is not found");
    }
    return 0;
}