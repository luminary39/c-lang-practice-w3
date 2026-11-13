#include <stdio.h>
#include <string.h>

int main(){
    int i;

    char carName[] = "Toyota";
    int length = strlen(carName);

    for(i = 0; i<length; i++){
        printf("%c", carName[i]);

    }

return 0;
}


