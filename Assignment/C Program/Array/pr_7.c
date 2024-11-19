// Perform 2D matrix array
#include<stdio.h>
void main(){
    int row,col;
    printf("Enter the size of row :");
    scanf("%d",&row);
    printf("Enter the size of col :");
    scanf("%d",&col);
    int arr[row][col];
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n printing array : ");
    for(int i=1;i<=row;i++){
        printf("\n");
        for(int j=1;j<=col;j++){
            printf("%d \t",arr[i][j]);
        }
    }
}