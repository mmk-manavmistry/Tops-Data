// WAP to accept 5 students name and store it in array
#include <stdio.h>

int main() {
    char a[5][20]; 
    int i;
    for(i = 0; i < 5; i++) 
    {
        printf("Enter name %d: ", i + 1);
        scanf("%s", a[i]);
    }
    printf("The entered names are:\n");
    for(i = 0; i < 5; i++) {
        printf("%s\n", a[i]);
    }
}
