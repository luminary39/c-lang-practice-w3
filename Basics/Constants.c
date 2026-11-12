/*const keyword, which makes a variable unchangeable and read-only:*/

#include <stdio.h>

int main(){
    const int myNum = 15;
    // myNum = 10;

    printf("%d",myNum);


    return 0;
}

/* Error Message
Constants.c: In function 'main':
Constants.c:7:11: error: assignment of read-only variable 'myNum'
    7 |     myNum = 10;
      |           ^

*/
