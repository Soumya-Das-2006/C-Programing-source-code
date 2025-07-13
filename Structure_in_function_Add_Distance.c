#include <stdio.h>

struct Distance {
    int feet;
    float inches;
};

// Function to add two distances
struct Distance add_distances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
    
    // Convert inches to feet if greater than 12
    if (result.inches >= 12.0) {
        result.inches -= 12.0;
        result.feet++;
    }

    return result;
}
int main() {
    struct Distance d1, d2, result;

    // Input the first distance
    printf("Enter feet and inches for the first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%f", &d1.inches);

    // Input the second distance
    printf("Enter feet and inches for the second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%f", &d2.inches);

    // Add the distances
    result = add_distances(d1, d2);

    // Display the result
    printf("Sum of distances: %d feet %.2f inches\n", result.feet, result.inches);

    return 0;
}