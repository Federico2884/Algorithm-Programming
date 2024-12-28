#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b) {
    // Cast the void pointers to char pointers
    return strcmp(*(char **)a, *(char **)b);
}

int main(){
	
	int i, n;
	
	scanf("%d", &n);
	
	char **str = (char **)malloc(n * sizeof(char *));
	for(i = 0; i < n; i++){
		str[i] = (char *)malloc(100 * sizeof(char));
	}
	
	for(i = 0; i < n; i++){
		scanf("%s", str[i]);
	}
	
	qsort(str, n, sizeof(char *), compare);
	
	for(i = 0; i < n; i++){
		printf("%s\n", str[i]);
	}
	
	free(str);
	
	return 0;
}
