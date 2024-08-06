//find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
void main(){
    int w,h,l,prism_area;
    printf("Enter the value of the width =");
    scanf("%d",&w);
    printf("Enter the value of the height =");
    scanf("%d",&h);
    printf("Enter the value of the length =");
    scanf("%d",&l);
    prism_area = 2*((w*l)+(h*l)+(h*w));
    printf("\n rectangular prism formula = %d",prism_area);
}