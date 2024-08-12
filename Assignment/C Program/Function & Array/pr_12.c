// WAP to accept 5 students name and store it in array
#include<stdio.h>
void main(){
    int size;
    printf("Enter array size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=1; i<=size; i++){
        scanf("%s",&arr[i]);
    }
    printf("Student name array is : ");
    for(int i=1; i<=size; i--){
        printf("%s ",arr[i]);
    }
}