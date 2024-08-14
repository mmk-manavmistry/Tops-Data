// Accept 5 numbers from user and perform sum of array
#include <stdio.h>
int main() {
    int size;
    printf("Ennter the size :");
    scanf("%d", &size);
    int arr[size];  
    int sum = 0;     
    for (int i = 1; i <=size; i++) {
        printf("Number %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i <=size; i++) {
        sum += arr[i];
    }
    printf("The sum of the array is: %d\n", sum);
}
