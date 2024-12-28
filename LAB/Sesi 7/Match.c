#include<stdio.h>

int main(){
	
	int i, j, testcase, num, bibi, lili;
	
	scanf("%d", &testcase);
	
	for(i = 0; i < testcase; i++){
		scanf("%d", &num);
		
		int val[num];
		for(j = 0; j < num; j++){
			scanf("%d", &val[j]);
		}
		scanf("%d %d", &bibi, &lili);
		
		if(val[bibi - 1] > val[lili - 1]){
			printf("Case #%d : Bibi\n", i + 1);
		} else if(val[bibi - 1] < val[lili - 1]){
			printf("Case #%d : Lili\n", i + 1);
		} else{
			printf("Case #%d : Draw\n", i + 1);
		}
	}
	
	return 0;
}
