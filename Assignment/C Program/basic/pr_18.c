//Calculate person’s Annual salary
#include<stdio.h>
void main(){
    int mon_salary,annual_salary;
    printf("enter the person salary =");
    scanf("%d", &mon_salary);
    annual_salary = mon_salary * 12;
    printf("annual salary = %d\n",annual_salary);

}