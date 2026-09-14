#include <stdio.h>

int main(){
    int myNum = 1000;
    printf("Integer Number: %d\n", myNum);

    float myFloat = 3.39;
    printf("Float Number: %f\n", myFloat);

    // Doube number value takes 8 bytes and gives 6-7 digits after decimal
    double myDouble = 19.99;
    printf("My Double Number: %lf", myDouble);

    // Scientific Numbers
    // write scientific numbers using e or E
    // which means "times 10 to the power of"

    double sciNum = 21e10;
    printf("\nMy Scientific Number: %lf", sciNum);

    // returned value 210000000000.000000
    // Now trying scientific Integer number

    // declaring int

    int sciInt;
    sciInt = 40e3;

    printf("\nMy Scientific Integer Number: %d", sciInt);


    // showing specific digits as output after decimal

    float myFloatingNum = 3.5;
    printf("\n\n\nMy Floating 1 Digit Number: %.1f", myFloatingNum);

    // 2 digit number
    printf("\nMy Floating 1 Digit Number: %.2f", myFloatingNum);

    // 3 digit number
    printf("\nMy Floating 1 Digit Number: %.3f", myFloatingNum);

    // 4 digit number
    printf("\nMy Floating 1 Digit Number: %.4f", myFloatingNum);

    // 5 digit number
    printf("\nMy Floating 1 Digit Number: %.5f", myFloatingNum);






    return 0;
}