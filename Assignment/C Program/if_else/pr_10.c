//WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
void main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number>0){
        printf("Enter number is positive");
    }else if(number==0){
        printf("Enter number is zero");
    }else{
        printf("Enter number is negative");
    }
}