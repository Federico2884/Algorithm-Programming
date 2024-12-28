#include<stdio.h>

int main(){
	
	int x,y,z;
	
		scanf("%d", &x); getchar();
		scanf("%d", &y); getchar();
		scanf("%d", &z); getchar();
		
	char stringx[100];
	char stringy[100];
	char stringz[100];
	
		sprintf(stringx, "%d", x);
		sprintf(stringy, "%d", y);
		sprintf(stringz, "%d", z);
		
	printf("%c\n", stringx[1]);
	printf("%c\n", stringy[1]);
	printf("%c\n", stringz[1]);
	
	
	return 0;
}
