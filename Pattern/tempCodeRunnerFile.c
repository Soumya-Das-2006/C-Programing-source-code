#include<stdio.h>

void main()
{  
    int n, i;
    char str[100]; // Define a character array for strings.

    printf("Enter String: ");
    scanf("%s", str); // Use %s to read a string.

    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("   %s  \t", str); // Use %s to print the string.
    }
}