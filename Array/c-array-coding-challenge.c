/*

Challenge: Create a Simple Array
Test your understanding of C arrays by completing a small coding challenge.

Instructions
Inside main(), complete the following steps:
Declare an int array named numbers with 5 elements
Set the first element (numbers[0]) to 10
Set the last element (numbers[4]) to 50
Print the first and last element using printf

*/

#include <stdio.h>

int main(){

    int numbers[5];

    // setting array index elements according to requirements
    numbers[0] = 10; numbers[4] = 50;

    // printing first and last elements of this array

    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[4]);


    return 0;
}