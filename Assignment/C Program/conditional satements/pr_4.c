//WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement
#include<stdio.h>
void main(){
    int num1,num2;
    char ch;
    printf("\nA is sign for addition");
    printf("\nS is sign for subtraction");
    printf("\nD is sign for division");
    printf("\nM is sign for multiplication");
    printf("\nR is sign for modulo");
    printf("\nEnter the character :");
    scanf("%c",&ch);
    if(ch=='a' || ch =='A'){
        printf("\n Enter num1 :");
        scanf("%d",&num1);
        printf("\n Enter num2 :");
        scanf("%d",&num2);
        printf("\n addition is :%d",num1+num2);
    }else if(ch=='s' || ch =='S'){
        printf("\n Enter num1 :");
        scanf("%d",&num1);
        printf("\n Enter num2 :");
        scanf("%d",&num2);
        printf("\n subtraction is :%d",num1-num2);
    }else if(ch=='d' || ch =='D'){
        printf("\n Enter num1 :");
        scanf("%d",&num1);
        printf("\n Enter num2 :");
        scanf("%d",&num2);
        printf("\n division is :%d",num1/num2);
    }else if(ch=='m' || ch=='M'){
        printf("\n Enter num1 :");
        scanf("%d",&num1);
        printf("\n Enter num2 :");
        scanf("%d",&num2);
        printf("\n Multiplication is :%d",num1*num2);
    }else if(ch=='r' || ch=='R'){
        printf("\n Enter num1 :");
        scanf("%d",&num1);
        printf("\n Enter num2 :");
        scanf("%d",&num2);
        printf("\n Modulo is :%d",num1%num2);
    }else{
        printf("\n Invalid Choice ");
    }
}