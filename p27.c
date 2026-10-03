#include<stdio.h>
#include<string.h>
int main(){
    char str1[40],str2[40];
    printf("enter a string: ");
    scanf("%s", str1);
    printf("enter the second string:");
    scanf("%s", str2);
    if (strcmp(str1,str2)==0){
        printf("\nthe strings are equal");
    }
    else{
        printf("\nthe string is not equal");
    }
    return 0;
}