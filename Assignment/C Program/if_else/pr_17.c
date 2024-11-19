/*
Write a C program to input basic salary of an employee and calculateits Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80% Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%\
*/
#include<stdio.h>
void main(){
    float salary,da,hra,gross;
    printf("Enter basic salary :");
    scanf("%f", &salary);
    if(salary<=10000){
        hra = salary * 0.20;
        da = salary * 0.80;
        gross = salary+hra +da;
        printf("Gross salary: %f\n", gross);
    }else if(salary<=20000){
        hra = salary * 0.25;
        da = salary * 0.9;
        gross = salary+hra +da;
        printf("Gross salary: %f\n", gross);
    }else if(salary>20000){
        hra = salary * 0.3;
        da = salary * 0.95;
        gross = salary+hra +da;
        printf("Gross salary: %f\n", gross);
    }
}