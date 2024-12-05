#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i, j, k, testcase, num, temp;
	scanf("%d", &testcase);
	
	for(i = 0; i < testcase; i++){
		scanf("%d", &num);
		int *val = (int *)malloc(num * sizeof(int));
		
		for(j = 0; j < num; j++){
			scanf("%d", &val[j]);
		}
		for(j = 0; j < num; j++){
			for(k = 0; k < num; k++){
				if(val[j] > val[k]){
					temp = val[j];
					val[j] = val[k];
					val[k] = temp;
				}
			}
		}
		printf("Case #%d: ", i + 1);
		for(j = 0; j < num - 1; j++){
			printf("%d ", val[j] += val[j + 1]);
		}
		printf("\n");
		
		free(val);
	}
	
	return 0;
}
