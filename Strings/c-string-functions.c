#include <stdio.h>
#include <string.h>

int main(){
    char name[10] = "Sakib";
    printf("String: %s\n", name);
    printf("Size Of Array: %zu\n", sizeof(name));
    printf("Size of String: %zu", strlen(name));

    return 0;
}