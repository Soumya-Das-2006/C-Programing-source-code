#include <stdio.h>

/*// Function declaration
void login() {
    // Some code
    printf("Login successful!\n");
}

// Main function
int main() {
    login();  // Function call
    return 0;
}*/
int add(int x, int y) {
    return x + y;
}

int main() {
    int result = add(2, 3);//Enter first or second number for sum
    printf("\nSum: %d", result);
    return 0;
}
