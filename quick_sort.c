#include <stdio.h>

void swaper(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];       // last element pivot
    int i = low - 1;             // chhote elements ki boundary

    for (int j = low; j < high; j++){
        if (arr[j] < pivot){
            i++;
            swaper(&arr[i], &arr[j]);
        }
    }
    swaper(&arr[i + 1], &arr[high]);   // pivot ko sahi jagah rakho
    return i + 1;                      // pivot ka index
}

void quicksort(int arr[], int low, int high){
    if (low < high){
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);    // left part
        quicksort(arr, pi + 1, high);   // right part
    }
}

int main(){
    int arr[] = {56, 67, 89, 54, 68};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}