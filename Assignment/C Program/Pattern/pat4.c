//pattern 4
// A
// * *
// B C D
// * * * *
// E F G H I

#include<stdio.h>
int main(){
    int row,col;
    char ch='A';
    for(row=0;row<5;row++){
        for(col=0;col<=row;col++){
            if(row%2==0){
              
                  printf("%c ",ch);
            ch++;
            }
            else{
            printf("* ");
            } 
        }
        printf("\n");
    }
}