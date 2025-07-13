#include <stdio.h>

// Function to add two numbers
int add(int x, int y) {
    return x + y;
}

// Function to subtract two numbers
int subtract(int x, int y) {
    return x - y;
}

// Function to multiply two numbers
int multiply(int x, int y) {
    return x * y;
}

// Function to divide two numbers
float divide(float x, float y) {
    if (y != 0) {
        return x / y;
    } else {
        printf("Error: Division by zero!");
        return 0;
    }
}

int main() {
    int choice;
    float num1, num2;

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n\tPlease Choice 1-4 : ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case 1:
            printf("%.2f + %.2f = %.2f\n", num1, num2, add(num1, num2));
            break;
        case 2:
            printf("%.2f - %.2f = %.2f\n", num1, num2, subtract(num1, num2));
            break;
        case 3:
            printf("%.2f * %.2f = %.2f\n", num1, num2, multiply(num1, num2));
            break;
        case 4:
            printf("%.2f / %.2f = %.2f\n", num1, num2, divide(num1, num2));
            break;
        default:
            printf("Invalid choice!");
    }

    return 0;
}


