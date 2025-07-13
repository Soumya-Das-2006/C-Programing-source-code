#include <stdio.h>

#define PI 3.14159  // Correct macro definition

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;  // Correct area calculation

    printf("Calculated area: %.2f\n", area);
    
    return 0;
}
