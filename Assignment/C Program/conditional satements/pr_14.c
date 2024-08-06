//WAP to find the largest of three numbers.
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Entter the value of a : ");
    scanf("%d",&a);
    printf("Entter the value of b : ");
    scanf("%d",&b);
    printf("Entter the value of c : ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("a is greatest");
    }else if(b>a && b>c){
        printf("b is greatest");
    }else{
        printf("c is greatest");
    }
}