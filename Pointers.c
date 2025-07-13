#include <stdio.h>

int main() {
    char letter = 'A';  // Declare and initialize a character variable
    char *p = &letter;  // Declare and initialize a pointer variable

    // Output using format specifiers
    printf("Letter: %c\n", letter);  // %c for character
    printf("Address of letter: %p\n", (void *)p);  // %p for pointer address
    printf("Value at address p: %c\n", *p);  // Dereference pointer using *

    return 0;
}