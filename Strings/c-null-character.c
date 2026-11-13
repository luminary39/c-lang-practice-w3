#include <stdio.h>

int main(){
    char greetings[] = "Hello World!";
    printf("%c\n", greetings[11]); // printing !
    printf("%zu\n", sizeof(greetings)); // printing array sizse -- which is 13(including Null value)

    return 0;
}