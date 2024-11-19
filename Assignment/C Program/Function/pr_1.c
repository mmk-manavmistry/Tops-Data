//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
float sum(float a, float b);
float mul(float a, float b);
float sub(float a, float b);
float div(float a, float b);
void main() {
    float a, b;
    float res;
    char ch;
    char chh;

    do {
        printf("\nEnter an operator (+, -, *, /): ");
        scanf(" %c", &ch);
        printf("\nEnter value of a: ");
        scanf("%f", &a);
        printf("\nEnter value of b: ");
        scanf("%f", &b);
        switch(ch) {
            case '+': 
                printf("\nSummation is: ");
                res = sum(a, b);
                printf("\nResult is: %f\n", res);
                break;
            case '-': 
                printf("\nSubtraction is: ");
                res = sub(a, b);
                printf("\nResult is: %f\n", res);
                break;
            case '*': 
                printf("\nMultiplication is: ");
                res = mul(a, b);
                printf("\nResult is: %f\n", res);
                break;
            case '/': 
                printf("\nDivision is: ");
                res = div(a, b);
                printf("\nResult is: %f\n", res);
                break;
            default:
                printf("\nInvalid input\n");
                break;
        }

        // Check if the user wants to exit
        printf("\nDo you want to exit yes or no?:  ");
        scanf(" %c", &chh);

    } while(chh == 'n' || chh == 'N');
}
float sum(float a, float b) {
    return a + b;
}
float mul(float a, float b) {
    return a * b;
}
float sub(float a, float b) {
    return a - b;
}
float div(float a, float b) {
    return a / b;
}
