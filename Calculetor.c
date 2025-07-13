#include <stdio.h>

int main() 
{
    int choice, n, m, d;
    float a, b, c, z;
    printf("Choose a shape:\n");
    printf("1. Summation\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modeulus\n");
    printf("6. Percentage\n");
    printf("Enter the choice no. :");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\n Enter the first No.: ");
            scanf("%f", &a);
            printf("\n Enter the Second No.: ");
            scanf("%f", &b);
            printf("\n Enter the third No.: ");
            scanf("%f", &c);
            z = a+b+c;
            printf("Summation of this No.: %.2f\n", z);
            break;
        case 2:
            printf("\n Enter the first No.: ");
            scanf("%f", &a);
            printf("\n Enter the Second No.: ");
            scanf("%f", &b);
            z = a-b;
            printf("Substraction of This No.: %.2f\n", z);
            break;
        case 3:
            printf("Enter the first No.: ");
            scanf("%f", &a);
            printf("\n Enter the Second No.: ");
            scanf("%f", &b);
            z = a * b;
            printf("Multiplication of This No.: %.2f\n", z);
            break;
        case 4:
            printf("\n Enter the Devidend No.: ");
            scanf("%f", &a);
            printf("\n Enter the Devisor No.: ");
            scanf("%f", &b);
            z = a/b;
            printf("Division of This No.: %.2f\n", z);
            break;
        case 5:
            printf("\n Enter the Devidend No.: ");
            scanf("%d", &n);
            printf("\n Enter the Devisor No.: ");
            scanf("%d", &m);
            z = n%m;
            printf("Modeulus of This No.: %d\n", d);
            break;
        case 6:
            printf("\n Enter the No.: ");
            scanf("%f", &a);
            z = a/100;
            printf(" Percentage of This No.: %.2f\n", z);    
            break;        
        default:
            printf("Invalid choice\n");
    }

    return 0;
}