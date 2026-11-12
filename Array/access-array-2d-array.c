#include <stdio.h>

int main(){

    //declaring 3d array
    int matrix[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    printf("[0][2] Index Element: %d\n", matrix[0][2]); // printing 3
    matrix[0][2] = 40; // changing index value
    printf("Updated Index Element...\n");
    printf("[0][2] Index Element: %d", matrix[0][2]); // printing updated element value 40

    return 0;
}