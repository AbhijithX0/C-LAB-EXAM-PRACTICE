#include<stdio.h>
void main(){
    int key,arr[100],i,j,size,flag=0;
    printf("Enter the array size :");
    scanf("%d",&size);
    printf("Enter the array elements :");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the elmenent you want to search :");
    scanf("%d",&key);
    for(j=0;j<size;j++){ 
        if(arr[j]==key){
            flag==1;
            break;
        }
    }
    if(flag==1){
        printf("Element found at position : %d",j+1);
    }else{
        printf("Element not found");
    }
}