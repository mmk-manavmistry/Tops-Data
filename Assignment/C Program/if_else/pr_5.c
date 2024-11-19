//Check Number Is Positive or Negative
#include<stdio.h>
void main(){
    int number;
    printf("Enter number :");
    scanf("%d",&number);
    if(number<0){
        printf("Number is Negative\n");
    }else{
        printf("number is positive\n");
    }
}