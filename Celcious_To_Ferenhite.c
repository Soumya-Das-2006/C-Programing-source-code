#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter Temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Fharenheit Temperature is %.2f deg F\n", fahrenheit);

    return 0;
}