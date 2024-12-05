#include<stdio.h>

int fibonacci(int n, int *count){
	(*count)++; //untuk fibocountnya
    if (n == 0){ // Base case for Fibonacci(0)
        return 0;
	} else if (n == 1){ // Base case for Fibonacci(1)
		return 1;
    } else{ // Recursive calls for Fibonacci(n)
   		return fibonacci(n - 1, count) + fibonacci(n - 2, count);
	}
    
}

int main(){

	int i, testcase, n, count, called;
	scanf("%d", &testcase);
	for(i = 0; i < testcase; i++){
		count = 0;
		scanf("%d", &n);
		
		fibonacci(n, &count);
	
		printf("Case #%d: %d\n", i + 1, count); // Call fibonacci and count the calls
	}	
	return 0;
}
