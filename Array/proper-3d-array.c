
#include <stdio.h>

int main() {

    // 3D Array: 3 Layers x 3 Rows x 3 Columns

    int matrix[3][3][3] = {

        {   // Layer 0
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },

        {   // Layer 1
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        },

        {   // Layer 2
            {19, 20, 21},
            {22, 23, 24},
            {25, 26, 27}
        }

    };

    int i, j, k;

    // Printing all elements with their indexes

    for(i = 0; i < 3; i++) {

        printf("\n================== LAYER %d ===================\n", i);

        for(j = 0; j < 3; j++) {

            for(k = 0; k < 3; k++) {

                printf("[%d][%d][%d] = %d\t",
                       i, j, k, matrix[i][j][k]);

            }

            printf("\n");
        }
    }

    return 0;
}
