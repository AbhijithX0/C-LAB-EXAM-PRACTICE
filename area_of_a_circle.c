#include<stdio.h>
void main(){
    int radius,area,pi=3.14;
    printf("Enter the radius of the circle :");
    scanf("%d",&radius);
    area=pi*radius*radius;
    printf("The area of the circle having radius %d is : %d",radius,area);
}