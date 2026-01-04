#include <stdio.h>

int main() {

    char answer, answer1;

    printf("Are you in college?\n");
    printf("Choose between y or n:\n");
    scanf(" %c", &answer);

    if (answer == 'y') {
        printf("Which one, is it PU?\n");
        printf("Again choose between y or n:\n");
        scanf(" %c", &answer1);

        if (answer1 == 'y') {
            printf("So basically, you are fucked up\n");
        } else {
            printf("You got some life\n");
        }
    } else {
        printf("Damn, you got some life\n");
    }

    return 0;
}
