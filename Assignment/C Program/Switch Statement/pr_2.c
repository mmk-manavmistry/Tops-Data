//WAP to input the week number and print week day.
#include<stdio.h>
void main(){
    int days;
    printf("Enter choice :");
    scanf("%d",&days);
    switch(days){
        case 1 :
        printf("monday");
        break;
        case 2 :
        printf("Tuesday");
        break;
        case 3 :
        printf("Wednesday");
        break;
        case 4 :
        printf("Thursday");
        break;
        case 5 :
        printf("friday");
        break;
        case 6 :
        printf("saturday");
        break;
        case 7 :
        printf("sunday");
        break;
        default:
        printf("Invalid choice");
        break;
    }
}