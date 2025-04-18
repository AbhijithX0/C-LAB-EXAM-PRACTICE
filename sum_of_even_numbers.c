#include<stdio.h>
void main(){
    int num,i,sum=0;
    printf("Enter the number of even numbers you want to find the sum of :");
    scanf("%d",&num);
    for(i=2;i<=num*2;i=i+2){
        sum=sum+i;
    }
    printf("SUM = %d",sum);
}