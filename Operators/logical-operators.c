#include <stdio.h>

int main(){

    // data
    int isLoggedin = 1;
    int isAdmin = 0;


    printf("(1 means True, 0 means False)\n\n\n");
    printf("User Logged In -  %d", isLoggedin || isAdmin);
    printf("\nUser is Admin - %d", isAdmin);
    printf("\nJust a regular NPC! - %d", !isLoggedin && !isAdmin);

    return 0;
}