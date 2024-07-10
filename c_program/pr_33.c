#include<stdio.h>
void main(){
    int number,res;
    printf("Enter the number =");
    scanf("%d",&number);
    res = number*1+number * number+number*number*number; 
    printf("\n powers = %d",res);
}