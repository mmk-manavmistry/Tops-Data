// WAP to print table up to given numbers
#include<stdio.h>
void main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    int i=1;
    while(i<=10){
        printf("%d * %d = %d \n",num,i,num*i);
        i++;
    }
}