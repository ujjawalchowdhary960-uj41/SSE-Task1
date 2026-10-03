#include<stdio.h>
#include<string.h>
void mystrcp(char target[], char source[]){
    int i;
    for (i=0;i<(strlen(source));i++){
        target[i]=source[i];
    }
    target[strlen(source)]='\0';
}
int main(){
    char source[]={"Ujjawal"};
    char target[40];
    mystrcp(target,source);
    printf("%s %s", source, target);
    return 0;
}