//Find area of Triangle Formula : A = 1/2 × b × h
#include<stdio.h>
void main(){
    int b,trianglearea,h;
    printf("Enter the value of the b =");
    scanf("%d",&b);
    printf("Enter the value of the h =");
    scanf("%d",&h);
    trianglearea = (b*h/2);
    printf("\n value of the Trianglearea = %d\n",trianglearea);
}