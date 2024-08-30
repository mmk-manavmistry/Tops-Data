// Write a program in C to remove characters from a string except alphabets.


#include <stdio.h>
int main() {
    char str[100];
    char result[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s",str);

    while (str[i] != '\0') {
        
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            result[j] = str[i];
            j++;
        }
        i++;
    }

    result[j] = '\0'; 

    printf("String with only alphabets: %s\n", result);

}
