#include <stdio.h>

struct cricket {
    char player_name[50];
    char team_name[50];
    float batting_average;
};

int main() {
    struct cricket players[50];
    int n;

    printf("Enter the number of players: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter details for player %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", players[i].player_name);
        printf("Team Name: ");
        scanf(" %[^\n]", players[i].team_name);
        printf("Batting Average: ");
        scanf("%f", &players[i].batting_average);
    }

    printf("\nTeam-wise Player List:\n");
    for (int i = 0; i < n; i++) {
        printf("Player: %s, Team: %s, Batting Average: %.2f\n",
               players[i].player_name, players[i].team_name, players[i].batting_average);
    }

    return 0;
}