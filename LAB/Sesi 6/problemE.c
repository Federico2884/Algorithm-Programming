#include<stdio.h>

int main(){
	
	int testcase, n, i, j, k;
	scanf("%d", &testcase);
	int matrix1[n][n], matrix2[n][n], matrix3[n][n];
	
	for(i = 0; i < testcase; i++){
		scanf("%d", &n);
		
		for(j = 0; j < n; j++){
			for(k = 0; k < n; k++){
				scanf("%d", matrix1[j][k]);
			}
		}
		for(j = 0; j < n; j++){
			for(k = 0; k < n; k++){
				scanf("%d", matrix2[j][k]);
			}
		}
		for(j = 0; j < n; j++){
			for(k = 0; k < n; k++){
				scanf("%d", matrix2[j][k]);
			}
		}
	}
	
	return 0;
}
