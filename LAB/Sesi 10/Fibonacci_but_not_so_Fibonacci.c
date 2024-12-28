#include<stdio.h>

long long int fibonacci(int n){
	
	if(n == 0 || n == 1){
		return n;
	} else if(n % 3 == 0){
		return 10;
	}
	
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
	
	int i, n;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("%d ", fibonacci(i));
	}
	printf("\n");
	
	return 0;
}
