#include <stdio.h>

// Function to calculate the sum of array elements
int sum_of_array(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    int total = sum_of_array(arr, size);

    printf("Sum of array elements: %d\n", total);

    return 0;
}
