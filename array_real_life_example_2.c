/*
in this example, we create a program that finds the lowest age among different ages:
*/

#include <stdio.h>

int main(){

    // An array storing different ages
    int ages[] = {34, 67, 12, 89, 45, 23, 76, 51, 18, 92, 39,
        64, 27, 83, 56, 14, 71, 48, 95, 31, 60, 22, 86, 43, 17, 
        78, 53, 29, 99, 41, 65, 11, 74, 36, 88, 25, 57, 19, 80, 
        46, 63, 28, 91, 15, 47, 82, 33, 69, 24, 96, 52, 13, 75, 
        40, 87, 19, 58, 30, 94, 21, 66, 44, 79, 16, 55, 98, 37, 
        72, 26, 84, 49, 10, 61, 35, 90, 23, 77, 42, 68, 54};
    int i;
    int lowest_age = ages[0]; // setting up intitial value to compare later

    //get the lenght of this array
    int length = sizeof(ages)/sizeof(ages[0]);

    for (i=0; i<length; i++){
        if (lowest_age > ages[i]){
            lowest_age = ages[i];
        }
    }

    printf("Lowest Age Is: %d", lowest_age); // Output: Lowest Age Is: 10




    return 0;
}