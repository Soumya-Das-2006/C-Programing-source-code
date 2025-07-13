#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, nguesses = 1, max_guesses = 10;
    srand(time(0));
    number = rand() % 100 + 1;

    printf("You have %d attempts to guess the number between 1 and 100.\n", max_guesses);

    do {
        printf("\nGuess the number: ");
        scanf("%d", &guess);
        if (guess > number) {
            printf("Lower number please!\n");
        } else if (guess < number) {
            printf("Higher number please!\n");
        } else {
            printf("You guessed it in %d attempts!\n", nguesses);
            break;
        }
        nguesses++;
    } while (guess != number && nguesses <= max_guesses);

    if (nguesses > max_guesses) {
        printf("Sorry, you've used all %d attempts. The number was %d.\n", max_guesses, number);
    }

    return 0;
}
