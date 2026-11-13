#include <stdio.h>
#include <string.h>

int main(){
    char name[] = "Sakib";
    char greetings[15] = "Hello, ";

    strcat(greetings, name);

    printf("%s", greetings);

    return 0;
}