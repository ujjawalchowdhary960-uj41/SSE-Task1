#include<stdio.h>
int main(){
    int n,i;
    printf("enter the no of elements to be entered:");
    scanf("%d",&n);
    int arr[n];
    for (i=0; i<n; i++){
    printf("enter the element %d: ", i);
    scanf("%d", &arr[i]);
    }
    return 0;
}