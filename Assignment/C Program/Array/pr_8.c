// Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
int main() {
    int size, size1;
    printf("\nEnter size for Array 1 (Ascending order): ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements for the first array (ascending order):\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sorting first array in ascending order
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] > arr[j]) {
                int temp1 = arr[i];
                arr[i] = arr[j];
                arr[j] = temp1;
            }
        }
    }
    
    
    printf("\nSorted first array (ascending order):\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}


