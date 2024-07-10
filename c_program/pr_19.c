#include<stdio.h>
#include<math.h>
void main(){
    float p,r,t;
    float amount;
    printf("Enter the value of principal amount = ");
    scanf("%f",&p);
    printf("\nEnter the value of rate = ");
    scanf("%f",&r);
    printf("\nEnter the period of times = ");
    scanf("%f",&t);
    amount=p*pow(1+r/100,t);
    //amount = p*(1 + r/100)*t;
    printf("\n amount = %f", amount);
}