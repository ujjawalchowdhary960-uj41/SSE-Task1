#include<stdio.h>
int main(){
    int i = 10;
    int* j = &i;
    *j *= 10;
    printf("the 10 times value of i is %d", *j);
    return 0;
}