#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the value for a :");
    scanf("%d",&a);
    printf("Enter the value for b :");
    scanf("%d",&b);
    printf("\nBEFORE SWAPPING\na=%d & b=%d",a,b);
    printf("\nAFTER SWAPPING\n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d & b=%d",a,b);

}