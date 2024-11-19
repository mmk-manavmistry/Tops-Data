//WAP to accept 5 numbers from user and display in reverse order using for loop and array
#include<stdio.h>
int main(){
    int size;
    printf("Enter array size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=1; i<=size; i++){
        scanf("%d",&arr[i]);
    }
    printf("Reverse array is : ");
    for(int i=size; i>=1; i--){
        printf("%d ",arr[i]);
    }
}