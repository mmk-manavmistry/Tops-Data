//WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);
    a = a * b;
    b = a / b;
    a = a / b;
    printf("\n enter the value of a = %d", a);
    printf("\n enter the value of b = %d", b);

}