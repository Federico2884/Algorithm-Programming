#include <stdio.h>

int stairgazer(int n){
	if(n == 1 || n == 2){
		return n;
	}
	return stairgazer(n - 1) + stairgazer(n - 2);
}

int main(){
	
    int n;
    scanf("%d", &n);
    
    printf("%d\n", stairgazer(n));
    
    return 0;
}
