// calculate the Factorial of a Given Number using while loop
#include<stdio.h>
void main(){
    int number;
    int fact = 1;
    int i =1;
    printf("Enter number: ");
    scanf("%d",&number);
    while(i<=number){
        fact = fact * i;
        i++;
    }
    printf("factorial is %d\n", fact);
}