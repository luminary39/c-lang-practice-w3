#include <stdio.h>

int main(){
    char greetings[] = "Hello World!";
    greetings[0] = 'F'; // replaces H with F

    printf("%s", greetings);



    return 0;
}