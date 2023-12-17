#include<stdio.h>

/* Q:1 */ void replaceChar(char *s, char oldChar, char newChar);
/* Q:2 */ char * replaceCharCopy(char *s, char oldChar, char newChar);


// QUESTION NO : 1

void replaceChar(char *s, char oldChar, char newChar){

char *ch=s;

while(*s != '\0'){

if(*s== oldChar){

*s = newChar;

}

s++;

}

printf("\nAfter Replacement we get : ");

while ( ch != (s+1) ){
    
    printf("%c",*ch);
    ch++;

}

// QUESTION NO : 2

}

char * replaceCharCopy(char *s, char oldChar, char newChar){


}