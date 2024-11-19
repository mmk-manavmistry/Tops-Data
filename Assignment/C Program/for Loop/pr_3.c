//WAP to take 10 no. Input from user find out below values
// a.How many Even numbers are there
// b.How many odd numbers are there
// c.Sum of even numbers
// d.Sum of odd numbers
#include<stdio.h>
    int number;
    int evencount = 0;
    int oddcount = 0;
    int sum_even = 0;
    int sum_odd = 0;
    printf("\nEnter number: ");
    for(int i=1;i<=10;i++){
        
        scanf("%d",&number);
        if(number%2==0){
            evencount++;
            sum_even = sum_even + number;
        }else{
            oddcount++;
            sum_odd = sum_odd + number;
        }
            }

        printf("\n Even Number: %d",evencount);
        printf("\n sum of even Number: %d",sum_even);
        printf("\n odd Number: %d",oddcount);
        printf("\n sum of odd Number: %d",sum_odd);


}