#include<stdio.h>

int fibonacci(int n){

    // Base case: if n is 0 or 1, return n
    if (n == 0){
        return 0;
	} else if (n % 2 != 0){
		return 1;
    } else{
   		return fibonacci(n - 1) + fibonacci(n - 2);
	}
    
}

int main(){
	
	int n;
	scanf("%d", &n);
	
	// n = 6 output = 3 (0, 1, 1, 2, 3, 5, 8, 13..)
	printf("%d\n", fibonacci(n));
	
	return 0;
}
