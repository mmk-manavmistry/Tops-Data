//WAP to convert years into days and days into years
#include<stdio.h>
void main(){
    int year,days;
    printf("Enter the year =");
    scanf("%d", &year);
    days = year * 365;
    printf("\n days: %d", days);
}