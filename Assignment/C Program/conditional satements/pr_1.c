//Write a C program to accept two integers and check whether they are equal or not
#include<stdio.h>
void main(){
    int num1,num2;
    printf("Enter the value of number 1: ");
    scanf("%d",&num1);
    printf("Enter the value of number 2: ");
    scanf("%d",&num2);
    if(num1==num2){
        printf("both number are same");
    }else{
        printf("both numbers are different");
    }
}