//WAP to convert years into days and days into years
#include<stdio.h>
void main(){
    int days,year;
    printf("enter the number of days = ");
    scanf("%d",&days);
    year = days / 365;
    printf("\n year = %d",year);
}