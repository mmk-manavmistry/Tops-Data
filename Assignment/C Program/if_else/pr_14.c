//Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
void main(){
    int cost_price,Sell_price,profit;
    printf("\nEnter the cost price :");
    scanf("%d",&cost_price);
    printf("\nEnter the sell price :");
    scanf("%d",&Sell_price);
    profit = (Sell_price - cost_price);
    if(profit>0){
        printf("\n you have get profit :%d ",profit);
    }else{
        printf("\n you in the loss :%d ",profit);
    }
}