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
   
// Test Case 1

printf("\nTest Case 1\n");

char str[8]="MURTAZA";

char oldChar='A';
char newChar='_';

replaceChar(str , oldChar, newChar);

// Test Case 2

printf("\nTest Case 2\n");

char str_2[8]="AOMSaTS";

oldChar='A';
newChar='C';

replaceChar(str_2 , oldChar, newChar);

// Test Case 3

printf("\nTest Case 3\n");

char str_3[12]="M__YE M__YE";

oldChar='_';
newChar='O';

replaceChar(str_3 , oldChar, newChar);

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