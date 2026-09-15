#include <stdio.h>

// These AND, OR, XOR, RIGHT SHIFT, LEFT SHIFT ARE  Bitwise Operators
int main() {

    
    int x;

    // &= means: x = x & 3
    x = 5;                    // Decimal 5 is binary 0101
    x &= 3;                   // Decimal 3 is binary 0011
                             // 0101 & 0011 = 0001
                             // So x becomes 1
    printf("AND: %d\n", x);  // Prints 1

    // |= means: x = x | 3
    x = 5;                   // 0101
    x |= 3;                  // 0011
                            // 0101 | 0011 = 0111
                            // So x becomes 7
    printf("OR: %d\n", x);  // Prints 7

    // ^= means: x = x ^ 3
    x = 5;                    // 0101
    x ^= 3;                   // 0011
                             // 0101 ^ 0011 = 0110
                             // Different bits become 1
                             // So x becomes 6
    printf("XOR: %d\n", x); // Prints 6

    // >>= means: x = x >> 2
    x = 16;                    // Binary: 10000
    x >>= 2;                   // Move every bit 2 positions right:
                              // 10000 → 00100
                              // So x becomes 4
    printf("Right shift: %d\n", x); // Prints 4

    // <<= means: x = x << 2
    x = 5;                     // Binary: 00101
    x <<= 2;                   // Move every bit 2 positions left:
                              // 00101 → 10100
                              // So x becomes 20
    printf("Left shift: %d\n", x); // Prints 20

    

    return 0;
}