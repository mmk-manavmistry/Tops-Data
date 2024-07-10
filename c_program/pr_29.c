#include<stdio.h>
void main(){
    int minute,second,hour;
    printf("Enter the minute = ");
    scanf("%d",&minute);
    second = minute * 60;
    hour = minute / 60;
    printf("\nsecond = %d",second);
    printf("\nhour = %d",hour);
}