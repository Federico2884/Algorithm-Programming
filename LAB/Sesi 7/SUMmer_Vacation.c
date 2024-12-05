#include <stdio.h>
#include <stdbool.h>

int main() {
    int i, j, k, l, testcase, num;
    scanf("%d", &testcase);

    for(i = 0; i < testcase; i++) {
        scanf("%d", &num);
        int val[num];
        bool counted[num]; // To track if a value has already been counted
        for(j = 0; j < num; j++) {
            scanf("%d", &val[j]);
            counted[j] = false;  // Initialize counted array to false
        }

        int counter = 0;

        // Check for each value if it can be represented as a sum of two other distinct values
        for(k = 0; k < num; k++) {
            for(j = 0; j < num; j++) {
                for(l = j + 1; l < num; l++) {  // Ensure l > j to avoid duplicate pairs
                    if(val[k] == val[j] + val[l] && !counted[k]) {
                        counter++;  // Increment the counter when a valid sum is found
                        counted[k] = true;  // Mark val[k] as counted
                        break;  // No need to check more pairs for this value
                    }
                }
                if(counted[k]) break;  // If we've already counted val[k], no need to check further pairs
            }
        }

        printf("Case #%d: %d\n", i + 1, counter);
    }

    return 0;
}

