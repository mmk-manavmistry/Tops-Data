#include<stdio.h>
void main(){
    int mon_salary,deducted_salary;
    float rem_salary;
    printf("Enter the persson monthaly salary = ");
    scanf("%d",&mon_salary);
    deducted_salary = mon_salary*0.1*0.1;
    rem_salary = mon_salary-deducted_salary;
    printf("remaining salary = %f\n",rem_salary);

}