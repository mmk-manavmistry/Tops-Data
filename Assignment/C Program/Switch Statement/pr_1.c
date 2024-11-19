//Write a program in C to read any Month Number in integer and display the number of days for this month.
#include<stdio.h>
void main(){
    int month_number;
    printf("Enter the Number :");
    scanf("%d",&month_number);
    switch(month_number){
        case 1:
        printf("%d is January",month_number);
        break;
        case 2:
        printf("%d is February",month_number);
        break;
        case 3:
        printf("%d is March",month_number);
        break;
        case 4:
        printf("%d is April",month_number);
        break;
        case 5:
        printf("%d is May",month_number);
        break;
        case 6:
        printf("%d is June",month_number);
        break;
        case 7:
        printf("%d is July",month_number);
        break;
        case 8:
        printf("%d is August",month_number);
        break;
        case 9:
        printf("%d is September",month_number);
        break;
        case 10:
        printf("%d is October",month_number);
        break;
        case 11:
        printf("%d is November",month_number);
        break;
        case 12:
        printf("%d is December",month_number);
        break;
        default :
        printf("%d Invalid choice.",month_number);
        break;
    }
    if(month_number == 1 ||month_number == 3 ||month_number == 5 ||month_number == 7 ||month_number == 8 ||month_number == 10 ||month_number == 12){
        printf("\n31 days in this month");
    }else if(month_number == 2){
        printf("\n28 days in this month");
    }else if(month_number ==4||month_number ==6||month_number ==9||month_number ==11) {
        printf("\n30 days in this month");
    }
}