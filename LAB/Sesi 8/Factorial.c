#include<stdio.h>

long long int factorial(int n){
	
	if(n < 2){
		return 1;
	}
	return n * factorial(n - 1) % 1000000007;
}

int main(){
	
	int i, j, num, testcase;
	
	scanf("%d", &testcase);
	
	for(i = 0; i < testcase; i++){
		scanf("%d", &num);
		int n[num];
		
		long long int sum = 1;
		for(j = 0; j < num; j++){
			scanf("%d", &n[j]);
			sum = (sum * factorial(n[j]) % 1000000007);
		}
		
		printf("Case #%d: %lld\n", i + 1, sum);
	}
	
	return 0;
}
