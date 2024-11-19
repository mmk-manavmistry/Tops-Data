factorial program
using while loop


#include<stdio.h>
void main(){
    int num,fact=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    int i=1;
    while(i<=num){
        fact = fact * i;
        i++;
    }
    printf("\n factorial is: %d",fact);
}

do while loop


#include<stdio.h>
void main(){
    int num,fact=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    int i=1;
    do{
        fact = fact * i;
        i++;
    }while(i<=num);
    printf("\n factorial is: %d",fact);
}

for loop

#include<stdio.h>
void main(){
    int num,fact=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i =1; i<=num; i++){
        fact = fact * i;
    }
    printf("\n factorial is: %d",fact);
}