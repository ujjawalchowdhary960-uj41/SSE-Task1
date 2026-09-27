#include<stdio.h>
void swap_twono(int* x,int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a=3;
    int b=6;
    swap_twono(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}