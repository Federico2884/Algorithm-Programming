#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[21]; 
    int score;     
} Player;

int compare(const void *a, const void *b) {
    Player *playerA = (Player *)a;
    Player *playerB = (Player *)b;
    return playerB->score - playerA->score; 
}

int main() {
    int N;
    scanf("%d", &N);

    Player *players = malloc(N * sizeof(Player));
    int playerCount = 0;

    for (int i = 0; i < N; i++) {
        char name[21];
        int score;
        scanf("%s %d", name, &score);

        int found = 0;
        for (int j = 0; j < playerCount; j++) {
            if (strcmp(players[j].name, name) == 0) {
                players[j].score = score;
                found = 1;
                break;
            }
        }

        if (!found) {
            strcpy(players[playerCount].name, name);
            players[playerCount].score = score;
            playerCount++;
        }
    }

    qsort(players, playerCount, sizeof(Player), compare);

    for (int i = 0; i < playerCount; i++) {
        printf("%s [%d]\n", players[i].name, players[i].score);
    }

    free(players);
    
    return 0;
}
