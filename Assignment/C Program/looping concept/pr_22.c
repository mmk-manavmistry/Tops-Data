//Accept 3 numbers from user using while loop and check each numbers palindrome

#include <stdio.h>
int main() {
    int number;         
    int originalNum;    
    int revnum=0;    
    int rem;      

    for (int i = 1; i <=3; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        originalNum = number;      
        while (number != 0) {
            rem = number % 10;                  
            revnum = revnum * 10 + rem;  
            number /= 10;                            
        }

        if (originalNum == revnum) {
            printf("Number %d (%d) is a palindrome.\n", i, originalNum);
        } else {
            printf("Number %d (%d) is not a palindrome.\n", i, originalNum);
        }
    }
}
