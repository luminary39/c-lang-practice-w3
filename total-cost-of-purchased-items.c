#include <stdio.h>

int main(){
    int items = 50;
    float cost = 9.99f;
    char currency = '$';

    float total_cost = items * cost;

    printf("Number of items: %d", items);
    printf("\nCost per items: %.2f %c", cost, currency);
    printf("\nTotal cost: %.2f %c", total_cost, currency);



    return 0;
}