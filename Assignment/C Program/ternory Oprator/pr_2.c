//WAP to find maximum number among 3 numbers using ternary operator
#include<Stdio.h>
void main(){
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    (a>b && a>c)?printf("a is greatest"):((b>a && b>c)?printf("b is greatest"):printf("c is greatest"));
}