#include <stdio.h>
#include <stdlib.h>

void resizeArray(int **arr, int *oldSize, int newSize) {
    int *newArray = (int *)malloc(newSize * sizeof(int)); // Allocate memory for new array
    if (newArray == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    
    // Copy elements from old array to new array
    int minSize = (*oldSize < newSize) ? *oldSize : newSize;
    for (int i = 0; i < minSize; i++) {
        newArray[i] = (*arr)[i];
    }

    // Initialize new elements if the array size increases
    for (int i = minSize; i < newSize; i++) {
        newArray[i] = 0; // Default value (optional)
    }
    
    // Free old array
    free(*arr);
    
    // Update pointer and size
    *arr = newArray;
    *oldSize = newSize;
    
    printf("Array resized to size %d\n", newSize);
}

int main() {
    int *arr = (int *)malloc(5 * sizeof(int)); // Initial size of 5
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize elements
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    int oldSize = 5;

    printf("Original array: ");
    for (int i = 0; i < oldSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Increase size
    int newSize = 8;
    resizeArray(&arr, &oldSize, newSize);
    
    printf("Resized array: ");
    for (int i = 0; i < newSize; i++) { // Use newSize to include new elements
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Decrease size (optional)
    newSize = 3;
    resizeArray(&arr, &oldSize, newSize);
    
    printf("Resized array: ");
    for (int i = 0; i < newSize; i++) { // Use newSize to reflect actual size
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free memory
    free(arr);

    return 0;
}
