#include <stdio.h>
#include <string.h>

int main(){
    char name[10] = "Sakib";
    char txt[20];

    // copying str name to str txt
    strcpy(txt, name);

    printf("%s", txt);


    return 0;
}