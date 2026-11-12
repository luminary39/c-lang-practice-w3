/*
we go through a list of numbers. We skip negative values, 
but stop the loop completely if we find a zero:
*/

#include <stdio.h>

int main(){
    int myNumbers[] = {3, -1, 7, 0, 9};
    int i, length = sizeof(myNumbers)/ sizeof(myNumbers[0]);

    for (i=0; i<length; i++){

        if (myNumbers[i] < 0){
            continue; // just ignoring negative values
        }
        if (myNumbers[i] == 0);
        break; // getting index value for 0(zero)
    }

    printf("Zero is in this index of this array: %d", myNumbers[i]);





    return 0;
}
