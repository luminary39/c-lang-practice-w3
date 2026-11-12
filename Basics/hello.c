#include <stdio.h>

int mul_value();

int main() {
    int myAge;
    myAge = 22;
    char myChar[] = "Sadman Sakib";
    printf("My name is %s & my age is %d\nI fuck bitches a lot!", myChar, myAge);
    //sum();
    mul_value(); // Calles mul_value function
    return 0;
}

/*
int sum(){
    int x = 5;
    int y = 10;
    int sum = x + y;
    printf("%d", sum);
    return 0;
}
*/

int mul_value(){
    int a,b,c;
    a = b = c = 1;
    printf("\n\na: %d\nb: %d\nc: %d\n", a,b,c);
    printf("Sum: %d", a + b + c);
    return 0;
}