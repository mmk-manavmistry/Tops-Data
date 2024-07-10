#include<stdio.h>
void main(){
    int days,month;
    printf("Enter the days = ");
    scanf("%d", &days);
    month = days / 30;
    printf("\n months = %d", month);
}