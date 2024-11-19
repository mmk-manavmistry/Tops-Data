//Accept 2 numbers and find out its sum check it size
#include<stdio.h>
void main(){
    int a,b,sum;
    printf("enter the value of a =");
    scanf("%d",&a);
    printf("enter the value of b =");
    scanf("%d",&b);
    sum = a + b;
    printf("\n sum = %d",sum);
    printf("\n size = %d",sizeof(sum));

}