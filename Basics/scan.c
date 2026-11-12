#include <stdio.h>

int main() {
    printf("\n\nTesting a Real-World Scenario\n\n");

    int savings = 100;  // Starting amount of savings
    int add;            // Amount entered by the user

    printf("How much would you like to add: ");

    // Read a whole number and store it in add
    scanf("%d", &add);

    // Add the entered amount to savings
    savings += add;

    // Show the updated total
    printf("\nTotal Savings:\t%d\n", savings);

    return 0;
}