#include <stdio.h>

struct Student {
    int rollno;
    char name[25];
    float cgpa;
};

int main() {
    int a;
    printf ("Student No.: ");
    scanf("%d",&a);
    struct Student s[a];
    int i;
    for (i = 0; i < a; i++) {
        printf("Write Student Rollno: \t");
        scanf("%d", &s[i].rollno);  
        printf("Write Student Name: \t");
        scanf("%s", s[i].name); 
        printf("Write Student CGPA: \t");
        scanf("%f", &s[i].cgpa);  
    }
    printf("\nStudent Information:\n");
    for (i = 0; i < a; i++) {
        printf("%d\tRoll No:   %d, Name:   %s, CGPA:   %.2f\n",i
        +1, s[i].rollno, s[i].name, s[i].cgpa);
    }

    return 0;
}
