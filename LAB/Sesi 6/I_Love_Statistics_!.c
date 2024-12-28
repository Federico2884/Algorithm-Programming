#include <stdio.h>
#include <limits.h>

void calculate_mean_median(long long int arr[], int n, double *mean, double *median) {
    long long int sum = 0;
    int i, j;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    *mean = (double) sum / n;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                long long int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    if (n % 2 == 0) {
        *median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else {
        *median = arr[n / 2];
    }
}

int main() {
    int testcase, n, i, j;
    scanf("%d", &testcase);

    char coutcase[testcase][100];
    char coutmean[testcase][100];
    char coutmedian[testcase][100];

    for (i = 0; i < testcase; i++) {
        scanf("%d", &n);
        long long int num[n];
        long long int sum = 0;

        for (j = 0; j < n; j++) {
            scanf("%lld", &num[j]);
            sum += num[j];
        }

        double mean, median;
        calculate_mean_median(num, n, &mean, &median);

        sprintf(coutcase[i], "Case #%d:\n", i + 1);
        sprintf(coutmean[i], "Mean : %.2lf\n", mean);
        sprintf(coutmedian[i], "Median : %.2lf\n", median);
    }

    for (i = 0; i < testcase; i++) {
        printf("%s", coutcase[i]);
        printf("%s", coutmean[i]);
        printf("%s", coutmedian[i]);
    }

    return 0;
}

