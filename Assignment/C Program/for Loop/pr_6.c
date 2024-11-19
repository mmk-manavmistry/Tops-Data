
#include<stdio.h>
void main(){
    int row,col;
    int start_number=01;
    int current_number;
    for(row=0;row<5;row++){
        for(col=0;col<10;col++){
            int current_number = start_number + col + row * 10;
            printf("%2d ",current_number);
        }
        printf("\n");
    }
}