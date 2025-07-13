#include <stdio.h>

void printMenu() {
    printf("\nArithmetic Operations Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice (1-5): ");
}

int main() {
    int choice;
    float num1, num2;
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y') {
        printMenu();
        scanf("%d", &choice);

        // Input validation for choice
        if (choice < 1 || choice > 5) {
            printf("Invalid option. Please choose again.\n");
            continue;
        }

        // Exit condition
        if (choice == 5) {
            break;
        }

        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        // Division by zero validation
        if (choice == 4 && num2 == 0) {
            printf("Error: Division by zero.\n");
            continue;
        }

        switch (choice) {
            case 1:
                printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
                break;
            case 4:
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                break;
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &repeat);
    }

    return 0;
}

