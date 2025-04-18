#include<stdio.h>
void main(){
    int num1,num2,num3,avg=0;
    printf("Enter three numbers :");
    scanf("%d%d%d",&num1,&num2,&num3);
    avg=(num1+num2+num3)/3;
    printf("The average of %d,%d,%d these three numbers is :%d",num1,num2,num3,avg);
}