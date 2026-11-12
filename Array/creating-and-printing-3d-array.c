#include <stdio.h>

/*
It's a 3d array but only first front blockcontains elements and two block at the background don't contain any element!
*/

int main(){

    int matrix[3][3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int i, j;
    int k;

    //printing elements of this 3d array with index numbers

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            for(k=0; k<3;k++){
                printf("[%d][%d][%d] Matrix Element is: %d\n", i, j, k, matrix[i][j][k]);
            }
        }
    }






    return 0;
}