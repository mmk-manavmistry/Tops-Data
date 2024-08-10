
//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
int main(){
    int i,num,sum=0;
    printf("end number series:\n");
    scanf("%d",&num);
    printf("(1*1)");
    for(int i=2;i<=num;i++){
        if(i!=num){
            printf("  + (%d*%d)",i,i);
        }else{
            printf("  + (%d*%d)",i,i);
        }
        sum +=(i*i);
    }
    printf(" = %d",sum+1);
}

