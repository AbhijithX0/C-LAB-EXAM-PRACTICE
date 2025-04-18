#include<stdio.h>
void main(){
    int age;
    char name[20],gen;
    printf("Enter you name :");
    gets(name);
    printf("Enter your gender M/F :");
    scanf("%c",&gen);
    printf("Enter your age :");
    scanf("%d",&age);
    
    printf("\nBIODATA\n");
    printf("Name : %s\n",name);
    printf("Age : %d\n",age);
    printf("Gender : %c\n",gen);
}