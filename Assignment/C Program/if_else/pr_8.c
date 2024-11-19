//WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include<stdio.h>
void main(){
    float height;
    printf("\n height:");
    scanf("%f", &height);
    if(height<=150){
        printf("person is smaller");
    }else if((height>150) && (height <=165)){
        printf("person height is Average");
    }else if(height>165){
        printf("person is taller");
    }
    }

