#include <stdio.h>

// Function to find the maximum element in an array
int fm(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void main() {
    int size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) { // Start from 0 and go up to size-1
        scanf("%d", &arr[i]);
    }
    
    printf("\nArray elements:\n");
    for (int i = 0; i < size; i++) { // Start from 0 and go up to size-1
        printf("%d ", arr[i]);
    }
    
    int max = fm(arr, size); // Call fm with correct parameters
    printf("\nMaximum element is: %d\n", max);
}
