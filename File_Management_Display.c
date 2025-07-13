#include <stdio.h>

int main() {
   FILE* fptr;
   char path[100];
   char ch;

   printf("Enter Open File Path: ");
   scanf("%s", path);

   fptr = fopen(path, "r");
   if (fptr == NULL) {
       printf("Error opening file.\n");
       return 1; // Exit if file cannot be opened
   }

   while ((ch = fgetc(fptr)) != EOF) {
       putchar(ch);
   }

   fclose(fptr);
   return 0;
}
