//Write a program to find out the max number from given array using function
#include <stdio.h>
int fm();
void main() {
    int size;
    printf("\nEnter array size: \n");
    scanf("%d", &size);
    int arr[size];
    printf("\nEnter %d array elements:\n",size);
    for (int i = 1; i <=size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nArray elements:\n");
    for (int i = 1; i <=size; i++) {
        printf("%d ", arr[i]);
    }
    int max = fm(arr, size);
    printf("\nMaximum element is: %d\n", max);
}
int fm(int arr[],int size){
    int max = arr[1];
     for (int i = 1; i<=size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
        return max;

}


