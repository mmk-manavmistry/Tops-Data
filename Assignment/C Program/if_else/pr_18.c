/*
Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit For next 100 units Rs. 0.75/unit For next 100 units Rs. 1.20/unit For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/
#include<stdio.h>
void main(){
    int units;
    int Elc_charge = 0;
    int with_charge = 0;
    int final_charge = 0;
    int final_amount;
    printf("Enter the units :");
    scanf("%d",&units);
    if(units <= 50){
        Elc_charge = units *0.50;
        printf("\n Elctricity bill: %d", Elc_charge);
        with_charge = Elc_charge*0.20; 
        printf("\n include 20 percent additional charge : %d", with_charge);
        final_amount = (with_charge + Elc_charge);
        printf("\n your Electricity bill: %d", final_amount);
    }else if(units>=50 && units<=100){
        Elc_charge = units *0.75;
        printf("\n Elctricity bill: %d", Elc_charge);
        with_charge = Elc_charge*0.20; 
        printf("\n include 20 percent additional charge : %d", with_charge);
        final_amount = (with_charge + Elc_charge);
        printf("\n your Electricity bill: %d", final_amount);
    }else if(units>=100 && units<250){
        Elc_charge = units *1.20;
        printf("\n Elctricity bill: %d", Elc_charge);
        with_charge = Elc_charge*0.20; 
        printf(" include 20 percent additional charge : %d", with_charge);
        final_amount = (with_charge + Elc_charge);
        printf("\n your Electricity bill: %d", final_amount);
    }else if (units>250)
    {
        Elc_charge = units *1.20;
        printf("\n Elctricity bill: %d", Elc_charge); 
        with_charge = Elc_charge*0.20; 
        printf(" include 20 percent additional charge : %d", with_charge);  
        final_amount = (with_charge + Elc_charge);
        printf("\n your Electricity bill: %d", final_amount);
    }
}