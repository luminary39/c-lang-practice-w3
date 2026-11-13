/*
This example counts the letters and digits in a string.
It loops through the string (see Strings and Loops) and checks each character:
isalpha()	a letter	'a', 'Z'
isdigit()	a digit	'0', '7'
isalnum()	a letter or a digit	'a', '7'
isupper()	an uppercase letter	'A', 'Z'
islower()	a lowercase letter	'a', 'z'
isspace()	white space, like a space, a tab or a new line	' ', '\n'
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char text[] = "Room Number 42";
    int letters = 0; int digits = 0; int spaces = 0; int dunno = 0;
    int i;

    for (i = 0; i < strlen(text); i++){
        if(isalpha(text[i])){
            letters++;
        } else if(isdigit(text[i])){
            digits++;
        } else if(isspace(text[i])){
            spaces++;
        } else{
            dunno++;
        }
    }

    printf("Letters: %d\n", letters);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Unrecognizable Characters: %d\n", dunno);



    return 0;
}