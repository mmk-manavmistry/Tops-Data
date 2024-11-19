// Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.
#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", &str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }
    printf("Modified sentence: %s\n", str);

}
