#include<stdio.h>
void main(){
    int num;
    int digit,nsave,rev=0;
    printf("Enter a number :");
    scanf("%d",&num);
    nsave=num;
    do{
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }while(num!=0);
    if(nsave==rev){
        printf("The entered number is a palindrom");

    }else{
        printf("The entered number is not a palindrome ");
    }
}