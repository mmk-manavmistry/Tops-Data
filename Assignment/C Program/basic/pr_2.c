//Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)
#include<stdio.h>
void main(){
    int a,b,c;
    printf("\n Enter a value of a = ");  
    scanf("%d",&a);
    printf("\n Enter a value of b = ");
    scanf("%d",&b);
    c = a + b;
    printf("\n Adition of the two numbers is = %d",c);
    c = a - b;
    printf("\n Subtraction of the two numbers is = %d",c);
    c = a * b;
    printf("\n Multiplication of the two numbers is = %d",c);
    c = a % b;
    printf("\n Modulo of the two numbers is = %d",c);


}