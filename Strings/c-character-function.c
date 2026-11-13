#include <stdio.h>
#include <ctype.h>

int main(){
    char x = 7;

    if(isdigit(x)){
        printf("%c is a digit.\n", x);
    }



    return 0;
}