#include<stdio.h>
char* strsli(char str[],int m,int n){
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];
    str = ptr1;
    str[n] = '\0';
    return  str;
}
int main(){
    char* sliced[8];
    char str[] = {"Ujjawal Bhai"};
    *sliced = strsli(str, 0, 7);
    printf("the sliced string is %s", *sliced);
    return 0;
}
