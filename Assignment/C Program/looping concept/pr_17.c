//Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include<stdio.h>
void main(){
    int numbers;
    int odd_count=0;
    int even_count=0;
    printf("\n Enter number :");
    int i=1;
    while(i<=5){
        scanf("%d",&numbers);
        if(numbers%2==0){
           even_count++; 
        }else{
            odd_count++;   
        }
        i++;
}
    printf("odd count is %d\n",odd_count);
    printf("even count is %d\n",even_count);
}