//fibonacci series

#include<stdio.h>
void main(){
    int end,a=0,b=1;
    int c;
    printf("\nEnter number End point:");
    scanf("%d",&end);
    for(int i=0;i<=end;i++){
        printf("%d ",a);
        c = a+b;
        a = b;
        b = c;
    }
}