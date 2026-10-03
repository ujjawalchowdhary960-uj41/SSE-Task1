#include<stdio.h>
int main(){
    int i,mul;
    FILE *fptr;
    fptr = fopen("file.txt","w");
    printf("Enter the number whose table needs to be written in the file:");
    scanf("%d",&mul);
    for (i=1;i<11;i++){
        int table;
        table=mul*i;
        fprintf(fptr,"%d\n",table);
    }
    fclose(fptr);
}