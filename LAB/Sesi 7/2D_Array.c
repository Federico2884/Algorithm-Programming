#include<stdio.h>

int main(){
	
	int i, j, rows, cols, queries;
	
	scanf("%d %d %d", &rows, &cols, &queries);
	
	int array[rows][cols];
	for(i = 0; i < rows; i++){
		for(j = 0; j < cols; j++){
			array[i][j] = 0;
		}
	}
	
	int x, y, a;
	for(i = 0; i < queries; i++){
		scanf("%d %d %d", &x, &y, &a);
		array[x][y] = a;
	}
	
	for(i = 0; i < rows; i++){
		for(j = 0; j < cols; j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
