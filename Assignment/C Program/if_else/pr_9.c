//C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
void main(){
    char ch;
    printf("Enter the character :");
    scanf("%c",&ch);
    if(ch>='97' || ch<='122'){
        printf("lowercase");
    }else if(ch>='65' || ch<='90'){
        printf("uppercase");
    }else if(ch>='48' || ch<='57'){
        printf("digit");
    }else{
        printf("Special characters");
    }
}