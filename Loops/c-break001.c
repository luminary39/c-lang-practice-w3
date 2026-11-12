#include <stdio.h>

int main(){

    int day;
    printf("Give me a number from 1-7: \n");
    scanf("%d", &day);

//     if (day <1 || day >7){
//         printf("Invalid Input! Entera number between 1-7\n");
// }

//     else{
    switch (day){
        case 1:
        printf("Friday");
        break;

        case 2:
        printf("Saturday");
        break;

        case 3:
        printf("Sunday");
        break;

        case 4:
        printf("Monday");
        break;

        case 5:
        printf("Tuesday");
        break;

        case 6:
        printf("Wednesday");
        break;

        case 7:
        printf("Thursday");
        break;

        default:
        printf("Invalid Input! Enter a number vetween 1-7!");
    }



    return 0;
}