//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
void main(){
    int number,res;
    printf("Enter the number =");
    scanf("%d",&number);
    res = number*1+number * number+number*number*number; 
    printf("\n powers = %d",res);
}