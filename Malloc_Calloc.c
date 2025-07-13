#include <stdio.h>
#include <stdlib.h>

void resizeArray(int ***arr, int *rows, int *cols, int newRows, int newCols) {
    int **newArray = (int **)malloc(newRows * sizeof(int *));
    if (newArray == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    for (int i = 0; i < newRows; i++) {
        newArray[i] = (int *)malloc(newCols * sizeof(int));
        if (newArray[i] == NULL) {
            printf("Memory allocation failed!\n");
            // Free already allocated rows before exiting
            for (int j = 0; j < i; j++) {
                free(newArray[j]);
            }
            free(newArray);
            return;
        }
    }

    // Copy existing elements to new array
    for (int i = 0; i < (*rows < newRows ? *rows : newRows); i++) {
        for (int j = 0; j < (*cols < newCols ? *cols : newCols); j++) {
            newArray[i][j] = (*arr)[i][j];
        }
    }

    // Free old memory
    for (int i = 0; i < *rows; i++) {
        free((*arr)[i]);
    }
    free(*arr);

    // Update pointers and sizes
    *arr = newArray;
    *rows = newRows;
    *cols = newCols;

    printf("Array resized to %d rows and %d columns\n", newRows, newCols);
}

int main() {
    int **arr, rows, cols;

    printf("Enter initial rows: ");
    scanf("%d", &rows);
    printf("Enter initial columns: ");
    scanf("%d", &cols);

    // Allocate memory for the array
    arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    // Resize array based on user input
    char choice;
    printf("Resize (increase/decrease) rows and columns? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y') {
        int newRows, newCols;
        printf("Enter new number of rows: ");
        scanf("%d", &newRows);
        printf("Enter new number of columns: ");
        scanf("%d", &newCols);
        resizeArray(&arr, &rows, &cols, newRows, newCols);
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
