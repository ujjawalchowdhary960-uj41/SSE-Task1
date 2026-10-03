#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char str[40] = {"Khelega phiri phayar?"};
    for (i=0 ;i < strlen(str);i++){
        str[i]=str[i]+3;
    }
    printf("The encrypted msg is %s",str);
    return 0;
}