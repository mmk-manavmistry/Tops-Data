//1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>
int main(){
    int i,num,sum=0;
    printf("end number series:\n");
    scanf("%d",&num);
    printf("1");
    for(int i=2;i<=num;i++){
        if(i!=num){
            printf("  + %d",i);
        }else{
            printf(" + %d",i);
        }
        sum +=i;
    }
    printf(" = %d",sum+1);
}


//
// #include<stdio.h>
// int main(){
//     int i,num,sum=0;
//     int j;
//     printf("en series:\n");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){
//         for(j=1;j<=i;j++){
//             sum = sum+j;
//         }
//     }
//     printf("\n sum:%d",sum);
// }