//Accept 5 expense from user and find average of expense
#include<stdio.h>
void main(){
    int per1, per2, per3, per4, per5,total_Expense;
    printf("\n Enter Expense of pr1 =");
    scanf("%d",&per1);
    printf("\n Enter Expense of pr2 =");
    scanf("%d",&per2);
    printf("\n Enter Expense of pr3 =");
    scanf("%d",&per3);
    printf("\n Enter Expense of pr4 =");
    scanf("%d",&per4);
    printf("\n Enter Expense of pr5 =");
    scanf("%d",&per5);
    total_Expense = per1+per2+per3+per4+per5;
    printf("\n Total Expense = %d",total_Expense);
}