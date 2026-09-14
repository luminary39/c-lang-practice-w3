// Besides the basic data types, thre are short, long & unsigned

// now i am going to print numbers with format specifier and code to indicate data types at the end of the value

#include <stdio.h>

int main(){

    // short int
    short int short_int = 10;
    printf("Short integer: %hd", short_int);

    // normal integer
    int num = 100;
    printf("\nNormal Integer: %d",  num);

    // unsigned integer
    unsigned int unsigned_int = 1000u;
    printf("\nUnsigned Integer: %u", unsigned_int);

    // long integer
    long int long_int = 10000L;
    printf("\nLong integer: %ld", long_int);

    //long long integer
    long long int long_long_int= 100000LL;
    printf("\nLong Long Integer: %lld", long_long_int);

    //Unsigned Long Integer
    unsigned long int unsigned_long_int = 1000000UL;
    printf("\nUnsigned long integer: %lu", unsigned_long_int);

    // unsigned long long int
    unsigned long long int unsigned_long_long_int = 10000000ULL;
    printf("\nUnsigned long long integer: %llu", unsigned_long_long_int);

    // long double
    long double long_double_int = 100000000;
    printf("\nLong Double Integer: %Lf", long_double_int);

    // outpu: Long Double: 100000000.000000



    return 0;
}

