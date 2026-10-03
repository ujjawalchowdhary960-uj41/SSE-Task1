#include<stdio.h>
struct vector{
    int i;
    int j;
};

int sumVector(int a,int b){
    int sum;
    sum=a+b;
    return sum;
}
int main(){
    int sum_i,sum_j;
    struct vector v1 = {3,4};
    struct vector v2 = {5,6};
    sum_i=sumVector(v1.i,v2.i);
    sum_j=sumVector(v1.j,v2.j);
    printf("the sum of rhe vectors is %di+%dj ", sum_i,sum_j);
    return 0;

}