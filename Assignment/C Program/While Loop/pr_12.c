// Write a C Program to Print the Multiplication Table of N i. E.g. 5 * 1 = 5
/*ii. 5 * 2 = 10
iii. 5 * 10 = 50*/
#include<stdio.h>
void main(){
    int num=5;
    int i=1;
    while(i<=10){
        printf("%d * %d = %d \n",num,i,num*i);
        i++;
    }
}