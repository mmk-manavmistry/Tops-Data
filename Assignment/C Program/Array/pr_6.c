// WAP to accept 5 numbers from user and check entered number is even or odd using of array
#include<stdio.h>
int main(){
    int size;
    printf("Enter a size : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=1;i<=size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nprint array : ");
    for(int i=1;i<=size;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEven numbers in the array are: ");
    for(int i=1;i<=size;i++)
    {
        if(arr[i]%2==0)
            printf("%d ", arr[i]);
    }
    printf("\nOdd numbers in the array are: ");
    for(int i=1;i<=size;i++)
    {
        if(arr[i]%2==1)
            printf("%d ", arr[i]);
    }

}
