#include <stdio.h>

struct book {
    char title[50];
    char author[50];
    char publication[50];
    float price;
};

int main() {
    int n, i;
    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct book books[n];
    for (i = 0; i < n; i++) {
        printf("Enter details for book %d\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        printf("Publication: ");
        scanf(" %[^\n]", books[i].publication);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    printf("\nBook Details:\n");
    for (i = 0; i < n; i++) {
        printf("Book %d: %s by %s, Published by %s, Price: $%.2f\n",
               i + 1, books[i].title, books[i].author, books[i].publication, books[i].price);
    }

    return 0;
}