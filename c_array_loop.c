#include <stdio.h>

int main(){

    int myNumbers[] = {25,50,75,100};

    int lenght = sizeof(myNumbers) / sizeof(myNumbers[0]);

    printf("Size of Array is: %d\n", lenght);
    printf("Array: {%d, %d,%d, %d}\n\n", myNumbers[0], myNumbers[1], myNumbers[2], myNumbers[3]);

    for (int i = 0; i < lenght; i++){
        printf("For Array Index '%d' Value is: %d\n", i, myNumbers[i]);
    }


    return 0;
}