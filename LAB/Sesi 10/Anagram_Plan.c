#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to count character frequencies
void countFrequencies(const char *str, int freq[]) {
	int i;
    for (i = 0; i < 26; i++) freq[i] = 0; // Initialize to zero
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            freq[str[i] - 'A']++;
        }
    }
}

// Function to check if there are common characters between two strings
int hasCommonCharacters(int freq1[], int freq2[]) {
	int i;
    for (i = 0; i < 26; i++) {
        if (freq1[i] > 0 && freq2[i] > 0) {
            return 1; // Common characters exist
        }
    }
    return 0; // No common characters
}

int main() {
    int T, test, i;
    scanf("%d", &T);
    getchar(); // Consume newline character
    
    for (test = 1; test <= T; test++) {
        char str1[256], str2[256];
        int freq1[26], freq2[26];
        
        // Input strings

        fgets(str1, sizeof(str1), stdin);
        str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline

        fgets(str2, sizeof(str2), stdin);
        str2[strcspn(str2, "\n")] = '\0'; // Remove trailing newline

        // Count frequencies
        countFrequencies(str1, freq1);
        countFrequencies(str2, freq2);

        // Check if anagram is possible
        if (!hasCommonCharacters(freq1, freq2)) {
            printf("Test %d: Anagram not found!\n", test);
            continue;
        }

        // Calculate deletions required
        int deletions = 0;
        for (i = 0; i < 26; i++) {
            deletions += abs(freq1[i] - freq2[i]);
        }

        // Output result
        printf("Test %d: %d\n", test, deletions);
    }
    
    return 0;
}

