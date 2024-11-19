//Accept marks from user and check pass or fail
#include<stdio.h>
void main(){
    printf(" if marks is less than 33 that students will be fail");
    int marks;
    printf("\nEnter the marks: ");
    scanf("%d", &marks);
    if(marks>=33){
        printf("\n Result is pass");
    }else{
        printf("\n Result is fail");
    }
}