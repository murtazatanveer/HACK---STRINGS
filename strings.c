// HACK STRINGS EXERCISES QUESTIONS

#include<stdio.h>
#include "string_utils.h"
#include<stdlib.h>
#include<string.h>

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

// QUESTION NO : 2

if (choice==2){
    
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



char *dyn_arr_ptr = replaceCharCopy(str , oldChar, newChar);

printf("\nAfter Replace of %c with %c we get : %s",oldChar,newChar,dyn_arr_ptr);


}

// QUESTION NO : 3

if(choice==3){

int s;
printf("\nHow many characters you want in your string : ");
scanf("%d",&s);

int size = s+1;

char str[size];

printf("\nEnter String : ");
scanf("%s",&str);
getchar();

char c;
printf("\nEnter Character you want to remove from \"%s\" : ",str);
scanf("%c",&c);

removeChar(str,c);


}

// QUESTION NO : 4

if(choice==4){

int s;
printf("\nHow many characters you want in your string : ");
scanf("%d",&s);

int size = s+1;

char str[size];

printf("\nEnter String : ");
scanf("%s",&str);
getchar();

char c;
printf("\nEnter Character you want to remove from \"%s\" : ",str);
scanf("%c",&c);

char *ptr = removeCharCopy(str,c);

printf("\nAfter Removing %c we get : %s",c,ptr);

}


}