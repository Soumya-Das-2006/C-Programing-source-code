#include<stdio.h>
void main() {
    int choice;
    float length, width, radius, side, area;

    printf("Choose a shape:\n");
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Square\n");
    printf("4. Sphere\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter length and width: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of rectangle: %.2f\n", area);
            break;
        case 2:
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("Area of circle: %.2f\n", area);
            break;
        case 3:
            printf("Enter side: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of square: %.2f\n", area);
            break;
        case 4:
            printf("Enter the radius of the sphere: ");
            scanf("%f", &radius); area = 4 * 3.14* radius * radius;
            printf("Area of Sphere: %.2f\n", area);
            break;
        default:
            printf("Invalid choice\n");
    }
}
