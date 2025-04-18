#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the value for a :");
    scanf("%d",&a);
    printf("Enter the value for b :");
    scanf("%d",&b);
    printf("Enter the value for c");
    scanf("%d",&c);
    if(a>b&&a>c){
        printf("a is greater than b and c");
    }else if(b>a&&b>c){
        printf("B is greater than a and c");
    }
    else{
        printf("c is greater ");
    }
}