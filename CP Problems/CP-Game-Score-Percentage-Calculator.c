/*

Title: Game Score Percentage Calculator
Difficulty: Easy — 1/5
Write a C program to calculate a player’s score percentage in a game.
The maximum possible score is 500, and the player’s score is 423.
Convert the player’s score to float before division so the calculated percentage keeps its decimal part. Print the result with exactly two digits after the decimal point.
Expected output:
User's percentage is 84.60

Use this formula:
percentage = (float) userScore / maxScore * 100.0;

*/

#include <stdio.h>

int main(){
    // setting highest score in game
    int maxScore = 500;

    // user's actual score
    int userScore = 423;

    //calculating user score percentage
    float percentage = (float) userScore/maxScore *100.0f;

    // printing percentage 2 digit float value
    printf("User's Percentage: %.2f\n", percentage);


    return 0;
}