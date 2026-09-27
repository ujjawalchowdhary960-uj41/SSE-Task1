#include<stdio.h>
void tentimes(int* j){
    *j *= 10;
}
int main(){
    int i = 10;
    tentimes(&i);
    printf("the new value of i is %d", i);
    return 0;
}
