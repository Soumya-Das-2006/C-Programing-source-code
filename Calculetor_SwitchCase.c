#include<stdio.h>

void main() {
    float a, b, c;
    int n;
    
    printf("\n 1. Addition");
    printf("\n 2. Subtraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    printf("\n\nEnter your choice: ");
    scanf("%d", &n);
    printf("\nEnter First Number: ");
    scanf("%f", &a);
    printf("Enter Second Number: ");
    scanf("%f", &b);
    switch (n) {
        case 1:
            c = a + b;
            printf("\nSum is = %.2f", c);
            break;
        case 2:
            c = a - b;
            printf("\nDifference is = %.2f", c);
            break;
        case 3:
            c = a * b;
            printf("\nProduct is = %.2f", c);
            break;
        case 4:
            if (b != 0) {
                c = a / b;
                printf("\nDivision is = %.2f", c);
            } else {
                printf("\nError.. Division by 0.");
            }
            break;
        default:
            printf("You have entered a wrong operation choice");
    }
}
