// A
// B C
// D E F
// G H I J
// K L M N O


#include<stdio.h>
void main(){
    
        char ch = 'A';
        int row,col;
        for(row=1;row<=5;row++){
            for(col=1;col<=row;col++){
                printf("%c",ch+row);
            }
            printf("\n");
        }
    }

