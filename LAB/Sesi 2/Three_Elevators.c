#include<stdio.h>

int main(){
	
	unsigned int x,y,z;

		scanf("%d %d %d", &x, &y, &z);
		
	unsigned int sum = x+y;
		if (x <= y){
			if (sum/2 == z){
				printf("%d\n", z-x);
			} else{
				printf("-1\n");
			}
		} else{
			printf("-1\n");
		}
		
	return 0;
}
