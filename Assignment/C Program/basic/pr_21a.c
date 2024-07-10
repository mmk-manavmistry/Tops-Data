#include<stdio.h>
void main(){
    int a,b,temp;
    printf("enter the value of a = ");
    scanf("%d",&a);
    printf("enter the value of b = ");
    scanf("%d",&b);
    temp =  a;
    a = b;
    b = temp;
    printf("enter the value of a = %d",a);
    printf("\n enter the value of b = %d",b);
}