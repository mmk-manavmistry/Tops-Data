//WAP to check if the given year is a leap year or not.
#include<stdio.h>
void main(){
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    if((year%4==0) && (year%100!=0)|| (year%400==0)){
        printf("year is leap year");
    }else{
        printf("year is not leap year");
    }
}