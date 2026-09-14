/*Question:
Inside main(), complete the following steps:
Declare an int named studentID and assign it a value
Declare a float named score and assign it a value (with decimals)
Declare a char named grade and assign it a single letter (in single quotes)
Print all three values using printf (use the correct format specifiers).
*/

#include <stdio.h>

int main(){
    //student id in int
    int student_id = 203560;
    // score in float
    float score = 3.39;
    // grade in char
    char grade = 'B';

    //printing everything with correct specifier
    printf("Student ID: %d", student_id);
    printf("\nScore: %.2f", score);
    printf("\nGrade: %c", grade);



    return 0;
}