#include<stdio.h>
void main(){
    int num,i,flag=0;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num<=1){
        printf("The number is not a prime");
    }else{
        for(i=2;i<=num/2;i++){
            if(num%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
        printf("The number is a prime");
    }else{
        printf("The number is not a prime");
    }
    }
}