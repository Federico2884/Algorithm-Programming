#include<stdio.h>

int main(){
	
	int x, y;
	
		scanf("%d %d", &x, &y);
		
	int reduced = (float)x - y;
	double discount = (float)reduced/x*100;
		
		printf("%.2lf%%\n", discount);
	
	return 0;
}
