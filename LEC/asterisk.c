#include <stdio.h>

int main() {
    int n, i, j;
    char symbol;
    scanf("%d %c", &n, &symbol);
    
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            if(j == 1 || j == i || i == n) {
                printf("%c ", symbol);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    
	return 0;
}
