// HACK STRINGS EXERCISES QUESTIONS

#include<stdio.h>
#include "string_utils.h"

int main(){

int choice;
printf("\nEnter Question No you want to execute (1-5) : ");
scanf("%d",&choice);

// QUESTION NO : 1

if (choice==1){
    
int s;
printf("\nHow many characters you want in your string : ");
scanf("%d",&s);

getchar();

int size = s+1;

char str[size];
char oldChar;
char newChar;

printf("\nEnter Your String : ");
scanf("%s",&str);

getchar();

printf("\nEnter Character you want to remove : ");
scanf("%c",&oldChar);

getchar();

printf("\nEnter Character you want to Place : ");
scanf("%c",&newChar);

replaceChar(str , oldChar, newChar);

}


}