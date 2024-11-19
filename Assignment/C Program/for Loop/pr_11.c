#include<stdio.h>
int main(){
    int i,num,sum=0;
    int j;
    printf("\nen series:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            sum = sum+j;
        }
    }
    printf("\nsum:%d",sum);
}