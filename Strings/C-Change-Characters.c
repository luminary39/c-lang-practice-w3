#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char text[] = "Hello World!";
    int i;

    for (i=0; i<strlen(text); i++){
        text[i] = toupper(text[i]);
    }

    printf("%s\n", text); // HELLO WORLD!



    return 0;
}