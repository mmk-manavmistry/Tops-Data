#include<stdio.h>
int fact(int num);
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int store = fact(num);
    printf("\n fact:%d",store);
}
int fact(int num){
    if(num<1){
        return 1;
    }else{
        return num = num*fact(num-1);
    }
}