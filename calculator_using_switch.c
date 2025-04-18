#include<stdio.h>
void main(){
    int a,b;
    char opr;
    printf("Enter the operation you want to perform:");
    scanf("%c",&opr);
    printf("Enter a value for a :");
    scanf("%d",&a);
    printf("Enter a value for b :");
    scanf("%d",&b);
    switch(opr){
        case '+':printf("Result : %d",a+b);
        break;
        case '-':printf("Result : %d",a-b);
        break;
        case '*':printf("Result : %d",a*b);
        break;
        case '/':printf("Result : %d",a/b);
        break;
        case '%':printf("Result : %d",a%b);
        break;
        default:printf("Invalid Entry");
    }
}