#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "hello";

    printf("%d\n", strcmp(str1, str2)); // returns 0: means both strings are same
    printf("%d", str2, str3); // doesn't returns 0: means strings are not same
    
}