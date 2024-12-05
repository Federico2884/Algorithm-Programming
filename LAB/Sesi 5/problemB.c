#include<stdio.h>

int main(){
	
	int i, j, k, meterfrog, coord, testcase;
	long long int finish, jump, sum;
	
	scanf("%d", &testcase);
	char cout[testcase][100];
	
	for(i = 0; i < testcase; i++){
		scanf("%lld", &finish);
		meterfrog = 1;
		sum = 0;
		coord = 0;
		jump = 0;
		
		while(sum < finish){
			jump++;	//printf("jump =%d\n", jump);
			sum += meterfrog; //printf("sum =%d\n", sum);
			meterfrog++; //printf("meterfrog =%d\n", meterfrog);
		}
		sprintf(cout[i],"Case #%d: %d", i + 1, jump);
	}
	for(i = 0; i < testcase; i++){
		printf("%s\n", cout[i]);
	}
	
	return 0;
}
