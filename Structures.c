#include <stdio.h>
struct Student{
   int rollno;
   char name[25];
   float cgpa;
};
void main ()
{struct Student s1 ;
printf("Write Student Rollno: \t");
scanf("%d",&s1.rollno);
printf("Write Student Name: \t");
scanf("%s",&s1.name);
printf("Write Student CGPA: \t");
scanf("%f",&s1.cgpa);


struct Student s2 ;
printf("Write Student Rollno: \t");
scanf("%d",&s2.rollno);
printf("Write Student Name: \t");
scanf("%s",&s2.name);
printf("Write Student CGPA: \t");
scanf("%f",&s2.cgpa);
printf("1st Information of Student---\n");
printf("Student Roll No: %d\tName: %s\tCGPA: %.2f\n",s1.rollno,s1.name,s1.cgpa);
printf("2nd Information of Student---\n");
printf("Student Roll No: %d\tName: %s\tCGPA: %.2f\n",s2.rollno,s2.name,s2.cgpa);
}