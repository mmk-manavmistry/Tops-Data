/*
Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
Temp < 0 then Freezing weather Temp 0-10 then Very Cold weather Temp 10-20 then Cold weather Temp 20-30 then Normal in Temp Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
*/
#include<stdio.h>
void main(){
    int Temprature;
    printf("Enter Temprature :");
    scanf("%d",&Temprature);
    if(Temprature<0){
        printf("Freezing weather");
    }else if(Temprature>=0 && Temprature<=10){
        printf("very cold weather");
    }else if(Temprature>=10 && Temprature<=20){
        printf("cold weather");
    }else if(Temprature>=20 && Temprature<=30){
        printf("Normal weather");
    }else if(Temprature>=30 && Temprature<=40){
        printf("hot weather");
    }else if(Temprature>=40){
        printf("Very Hot weather");
    }
    }
