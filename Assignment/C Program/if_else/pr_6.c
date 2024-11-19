//Find the Character Is Vowel or Not
#include<stdio.h>
void main(){
    char ch;
    printf("Enter the Charcter :");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E' ||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
        printf("Enter character is vowel");
    }else{
        printf("Enter character is consonant");
    }
}