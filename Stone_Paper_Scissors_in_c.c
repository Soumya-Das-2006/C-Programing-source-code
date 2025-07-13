#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get the computer's random choice
int getComputerChoice() {
    return (rand() % 3) - 1;  // Generates -1, 0, or 1 for Scissors, Paper, or Rock
}

// Function to get the player's choice
int getPlayerChoice() {
    char youstr;
    printf("Enter your choice (r for Rock, s for Scissors, p for Paper): ");
    scanf(" %c", &youstr);

    if (youstr == 'r') return 1;
    if (youstr == 's') return -1;
    if (youstr == 'p') return 0;

    printf("Invalid input! Defaulting to Rock.\n");
    return 1;  // Default to Rock if input is invalid
}

// Function to display the choice as a string
const char* getChoiceName(int choice) {
    if (choice == 1) return "Rock";
    if (choice == -1) return "Scissors";
    if (choice == 0) return "Paper";
    return "Unknown";
}

// Function to determine the game outcome
void determineOutcome(int player, int computer) {
    if (player == computer) {
        printf("It's a draw!\n");
    } else if ((computer - player) == -1 || (computer - player) == 2) {
        printf("You lose!\n");
    } else {
        printf("You win!\n");
    }
}

int main() {
    srand(time(0));  // Seed the random number generator

    int computer = getComputerChoice();
    int player = getPlayerChoice();

    printf("You chose %s\n", getChoiceName(player));
    printf("Computer chose %s\n", getChoiceName(computer));

    determineOutcome(player, computer);

    return 0;
}