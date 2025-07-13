#include <stdio.h>
#include <stdlib.h>
void resizeArray(int ***arr, int *rows, int *cols, int newRows, int
newCols) { int **newArray = (int **)malloc(newRows * sizeof(int *));
if (newArray == NULL) {
printf("Memory allocation failed!\n"); return;
}
for (int i = 0; i < newRows; i++) {
newArray[i] = (int *)malloc(newCols *
sizeof(int)); if (newArray[i] == NULL) {
printf("Memory allocation failed!\n"); return;
}
}
// Copy elements based on size changes
for (int i = 0; i < (*rows < newRows ? *rows : newRows);
i++) { for (int j = 0; j < (*cols < newCols ? *cols :
newCols); j++) { newArray[i][j] = (*arr)[i][j];
}
}
// Free old memory
for (int i = 0; i < *rows;
i++) { free((*arr)[i]);
}
free(*arr);
*arr = newArray;
*rows = newRows;
*cols = newCols;
printf("Array resized to %d rows and %d columns\n", newRows, newCols);
}
int main() {
int **arr, rows, cols;
printf("Enter initial rows:"); scanf("%d", &rows);
printf("Enter initial columns: ");
scanf("%d", &cols);
arr = (int **)malloc(rows *
sizeof(int *)); for (int i = 0; i < rows;
i++) {
arr[i] = (int *)malloc(cols * sizeof(int));
}
printf("Resize (increase/decrease) rows (y/n)?"); char choice;
scanf(" %c",&choice);
if
(choice == 'y') {
int newRows;
printf("Enter new number of rows: "); scanf("%d",
&newRows);
resizeArray(&arr, &rows, &cols, newRows, cols);
}
for (int i = 0; i < rows;
i++) { free(arr[i]);
}
free(arr);
return 0;
}