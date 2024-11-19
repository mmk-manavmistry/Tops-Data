// WAP to perform Palindrome number using for loop and function
#include <stdio.h>
int Palindrome(int num) {
    int check_num = num;
    int rev = 0;
    int rem;

    while (num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    return (rev == check_num);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (Palindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);   
    }
}
