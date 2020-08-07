
#include<stdio.h>

#define IN //represent inside of a word
#define OUT 0 //represent out a word

 main(){
     int characterGot;
     int newLine;
     int newWord;
     int newCharacter;
     int state;

     state = OUT;
     //initialize
     newLine = newWord = newCharacter = 0;

     while ((characterGot = getchar()) != EOF)
     {   ++newCharacter;
         
         if( characterGot =='\n')
         ++newLine;

         if (characterGot == ' ' || characterGot == '\n' || characterGot =='\t')
     }
     
 }

