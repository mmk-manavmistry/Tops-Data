//sum of natural number.
#include<stdio.h>
void main(){
    int end;
    int sum=0;
    printf("\n Enter end point:");
    scanf("%d",&end);
    int i=1;
    while(i<=10){
        sum+=i;
        i++;
    }
    printf("\n sum : %d",sum);
}