#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 60) {
        bill = 0;
    } else if (units <= 100) {
        bill = units * 5.50;
    } else if (units <= 200) {
        bill = 550 + ((units - 100) * 6.75);
    } else if (units <= 500) {
        bill = 1225 + ((units - 200) * 7.25);
    } else {
        bill = 3550 + ((units - 500) * 7.75);
    }

    printf("Total electricity bill: Rs. %.2f\n", bill);

    return 0;
}