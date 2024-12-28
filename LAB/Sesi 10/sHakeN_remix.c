#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 256

// Function to compare characters in descending order
int compareDescending(const void *a, const void *b) {
    return (*(char *)b - *(char *)a);
}

// Function to rearrange a word in descending alphabetical order
void rearrangeWord(char *word) {
    int len = strlen(word);
    qsort(word, len, sizeof(char), compareDescending);
}

int main() {
    char sentence[MAX_LEN];
    char targetWord[MAX_LEN];
    char tempWord[MAX_LEN];

    // Read input: sentence and target word
    fgets(sentence, MAX_LEN, stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // Remove trailing newline
    scanf("%s", targetWord);

    char *token = strtok(sentence, " ");
    int first = 1;

    // Process each word in the sentence
    while (token != NULL) {
        strcpy(tempWord, token);
        if (strcmp(token, targetWord) == 0) {
            rearrangeWord(tempWord);
        }

        if (first) {
            printf("%s", tempWord);
            first = 0;
        } else {
            printf(" %s", tempWord);
        }

        token = strtok(NULL, " ");
    }

    printf("\n");
    return 0;
}

