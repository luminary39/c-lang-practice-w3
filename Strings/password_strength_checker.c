#include <stdio.h>
#include <string.h>
#include <ctype.h>

int i; 
int upper = 0; 
int lower = 0; 
int numbers = 0; 
int special = 0; 
int spaces =0;
char pass[100];
int total_characters;


// declaring function
void pass_strength(){

// programe starts here

for (i = 0; i < strlen(pass); i++){
    if (isupper(pass[i])){
        upper++;
    } else if (islower(pass[i])){
        lower++;
    } else if (isdigit(pass[i])){
        numbers++;
    } else if(isspace(pass[i])){
        spaces++;
    } else{
        special++;
    }
}

    

// printing verdict
printf("\n\n========== PASSWORD Verdict ==========\n\n");
if (upper && lower && numbers && special){
    printf("\nYour Password Is Strong!");
}
else{
    printf("\nYour Password Needs To Have Minimum 1 Uppercase, 1 Lowercase, 1 Digit and 1 Special Character!");
}

// Printing Data
printf("\n\n========== PASSWORD ANALYSIS ==========\n\n");
printf("Total Uppercase: %d\n", upper);
printf("Total lowercase: %d\n", lower);
printf("Total Digits: %d\n", numbers);
printf("Total Special Characters: %d\n", special);
printf("Total Spaces: %d\n", spaces);
}

int main(){

    printf("Enter Your Password: ");
    scanf("%99s", pass);
    int total_characters = strlen(pass);
    

    if(total_characters >=8){
        pass_strength();
    }

    else{
        printf("Password Need to be at least 8 character long!\n");
        main();
    }
}