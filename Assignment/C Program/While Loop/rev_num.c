//reverse number : 123=321
#include<stdio.h>
int main(){
    int num=123,rem,rev=0;
    // printf("Enter number=");
    // scanf("%d",&num);

    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("Reverse=%d",rev);
}