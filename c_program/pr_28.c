#include<stdio.h>
void main(){
   int years,month,days;
   printf("Enter the year =");
   scanf("%d",&years);
   month = years * 12;
   days = years * 365;
   printf("\n month = %d",month);
   printf("\n days = %d",days); 
}