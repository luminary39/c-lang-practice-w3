// learning to get a sentence as a user input

#include <stdio.h>

int main(){
    // creating a string array
    char fullName[30];

    // asking user to input value
    printf("Type Your Full Name: ");

    // get the text
    fgets(fullName, sizeof(fullName), stdin);

    // printing output
    printf("Hello, %s", fullName);

    return 0;
}