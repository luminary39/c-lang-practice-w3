/*
To demonstrate a practical example of using arrays, 
let's create a program that calculates the average of different ages:
*/

#include <stdio.h>

int main(){

    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    float avg, sum =0;
    int i;

    //length of this array
    int length = sizeof(ages) / sizeof(ages[0]);

    for (i=0; i < length; i++){
        sum+=ages[i];

    }

    avg = sum / length;

    printf("Length Of This Array Is: %d\n", length);
    printf("Sum Of This Array Is: %.2f\n", sum);
    printf("Average Of This Array Is: %.2f", avg);


    return 0;
}