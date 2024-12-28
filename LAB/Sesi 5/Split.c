#include <stdio.h>

int main() {
    int i, j, testcase;
    scanf("%d", &testcase);
    char cout[testcase][100];

    for (i = 0; i < testcase; i++) {
        long long int n;
        scanf("%lld", &n);
        long long int num[n];
        long long int total_sum = 0;

        for (j = 0; j < n; j++) {
            scanf("%lld", &num[j]);
            total_sum += num[j]; printf("%d\n", total_sum);
        }

        if (total_sum % 2 != 0) {
            sprintf(cout[i], "Case #%d: No", i + 1);
            continue;
        }

        long long int half_sum = total_sum / 2;
        long long int current_sum = 0;
        int possible = 0;

        for (j = 0; j < n; j++) {
            current_sum += num[j];
            if (current_sum == half_sum) {
                possible = 1;
                break;
            }
        }

        if (possible) {
            sprintf(cout[i], "Case #%d: Yes", i + 1);
        } else {
            sprintf(cout[i], "Case #%d: No", i + 1);
        }
    }

    for (i = 0; i < testcase; i++) {
        printf("%s\n", cout[i]);
    }

    return 0;
}

