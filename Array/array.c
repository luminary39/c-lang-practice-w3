#include <stdio.h>

//declaration 
int i;

int main(){

    int age[] = {10,20,30,40,50,60,70,80,90,100};
    int salary[9];

    salary[0] = 20000;
    salary[1] = 30000;
    salary[2] = 40000;
    salary[3] = 50000;
    salary[4] = 60000;
    salary[5] = 70000;
    salary[6] = 80000;
    salary[7] = 90000;
    salary[8] = 100000;
    salary[9] = 200000;

    
    for (i=0; i<10; i++){
        printf("%d. For Age Under %d, Your Expected Salary Would Be: %d. \n",i+1, age[i], salary[i]);
    }





    return 0;
}