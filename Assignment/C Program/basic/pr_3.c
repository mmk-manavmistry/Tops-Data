#include<stdio.h>
#define pi 3.14
void main(){
    int radius;
    float area;
    float circumference;
    printf("\n Enter a number = ");
    scanf("%d",&radius);
    area = pi*radius*radius;
    circumference = 2*pi*radius;
    printf("\n Area of the circle = %f",area);
    printf("\n circumference of the circle = %f",circumference);
}