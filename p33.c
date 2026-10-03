#include<stdio.h>
struct date {
    int dt;
    int month;
    int year;
};
int main(){
    struct date d;
    printf("enter the date in DD");
    scanf("%d", &d.dt);
    printf("enter the month in MM");
    scanf("%d", &d.month);
    printf("enter the year in YYYY format ");
    scanf("%d", &d.year);
    printf("the entered date is %02d/%02d/%d", d.dt,d.month,d.year);
    return 0;
}