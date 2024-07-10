#include<stdio.h>
void main(){
    float farenhit,celcius;
    printf("Enter the farenhit = ");
    scanf("%f",&farenhit);
    celcius = (farenhit - 32)*5/9;
    printf("\n celcius = %f",celcius);
}