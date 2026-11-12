#include <stdio.h>

int main(){

    int result1 = 2 + 3 * 4;     // 2 + 12 = 14
    int result2 = (2 + 3) * 4;   // 5 * 4 = 20

    printf("%d\n", result1);
    printf("%d\n", result2);

    return 0;
}

/*
Order of Operations
Here are some common operators in C, from highest to lowest priority:

() - Parentheses
*, /, % - Multiplication, Division, Modulus
+, - - Addition, Subtraction
>, <, >=, <= - Comparison
==, != - Equality
&& - Logical AND
|| - Logical OR
= - Assignment
*/