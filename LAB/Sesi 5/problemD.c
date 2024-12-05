#include<stdio.h>

int main(){
	
	int testcase, height, width, i, j, k;
	scanf("%d", &testcase);
	
	for(i = 0; i < testcase; i++){
		scanf("%d %d", &height, &width);
		printf("Case #%d:\n", i + 1);
		
		for(j = 0; j < height; j++){
			for(k = 0; k < width; k++){
                if (j == 0 || k == 0 || j + 1 == height || k + 1 == width){
                	printf("#");
                } else {
                	printf(" ");
                }
            }
            printf("\n");
		}
	}
	
	return 0;
}
