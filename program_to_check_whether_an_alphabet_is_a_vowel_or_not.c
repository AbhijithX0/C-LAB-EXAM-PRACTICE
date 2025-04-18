#include<stdio.h>
void main(){
    char character;
    printf("Enter a character :");
    scanf("%c",&character);
    if(character == 'a' ||character == 'e' ||character == 'i' ||character == 'o' ||character == 'u' ||character == 'A' ||character == 'E' ||character == 'I' ||character == 'O' ||character == 'U'){
        printf("The entered character is a vowel");
    }else{
        printf("The entered character is a consonant");
    }
}