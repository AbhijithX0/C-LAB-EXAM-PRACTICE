#include<stdio.h>
void main(){
    int arr[100],size,i,j;
    printf("Enter the array size :");
    scanf("%d",&size);
    printf("Enter the array elements:");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=0;i<size;i++){
        if(max<arr[i]){
        max=arr[i];
        }
    }
    printf("%d is the largest ",max );
    
}