#include<stdio.h>

/* Q:1 */ void replaceChar(char *s, char oldChar, char newChar);







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



}