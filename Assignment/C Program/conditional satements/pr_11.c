//WAP to find number is even or odd using ternary operator
#include<stdio.h>
void main(){
    int number;
    printf("Enter number:");
    scanf("%d",&number);
    (number%2==0)?printf("Enter number is even"):printf("Enter number is odd");
}