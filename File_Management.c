#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    FILE* fptr;
    char path[260]; // Buffer for the file path
    char ch[5000];  // Buffer for file content

    // Prompt user for the file path
    printf("Enter the file path to open: ");
    scanf("%259s", path); // Limit input size to prevent buffer overflow

    // Open the file in read mode
    fptr = fopen(path, "r");
    if (fptr == NULL) {
        perror("Error opening file"); // Print error message
        return 1; // Exit with error
    }

    // Read and print the file content line by line
    printf("\nFile Content:\n");
    while (fgets(ch, sizeof(ch), fptr) != NULL) {
        printf("%s", ch); // Print the current line
    }

    // Close the file
    fclose(fptr);
    return 0; // Return success
}
