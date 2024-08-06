//Accept number of students from user. I need to give 5 apples to each student. How many apples are required?
#include<stdio.h>
void main(){
    int students,temp;
    printf("Enter the number of students = ");
    scanf("%d", &students);
    temp = students * 5;
    printf("Required apples = %d",temp);

}