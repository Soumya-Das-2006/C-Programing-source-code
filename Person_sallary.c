#include <stdio.h>

struct Person {
    char name[50];
    char date_of_joining[15];
    float salary;
};

int main() {
    struct Person people[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter details for person %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", people[i].name);
        printf("Date of Joining (dd-mm-yyyy): ");
        scanf(" %[^\n]", people[i].date_of_joining);
        printf("Salary: ");
        scanf("%f", &people[i].salary);
    }

    printf("\nDetails of People:\n");
    for (int i = 0; i < 5; i++) {
        printf("Person %d: %s, Joined on %s, Salary: %.2f\n",
               i + 1, people[i].name, people[i].date_of_joining, people[i].salary);
    }

    return 0;
}