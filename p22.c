#include<stdio.h>
int main(){
    int arr[3][2];
    int i,j;
    for (i=0;i<3;i++){
        for (j=0;j<2;j++){
            printf("enter the element for arr[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    return 0;
}
