#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, rem;
    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}

int decimalToBinary(int decimal) {
    int binary = 0, base = 1;
    while (decimal > 0) {
        binary += (decimal % 2) * base;
        base *= 10;
        decimal /= 2;
    }
    return binary;
}

int main() {
    int choice, num;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nChoose an option: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &num);
        printf("Decimal: %d\n", binaryToDecimal(num));
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &num);
        printf("Binary: %d\n", decimalToBinary(num));
    } else {
        printf("Invalid option.\n");
    }

    return 0;
}
