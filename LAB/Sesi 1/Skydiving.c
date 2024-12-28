#include<stdio.h>

int main(){
	
		char name1[100]; 
		double height1; 
		int age1; 
		
		char name2[100]; 
		double height2; 
		int age2; 
		
		scanf("%s", name1); 
		scanf("%lf", &height1); 
		scanf("%d", &age1); 
		
		scanf("%s", name2); 
		scanf("%lf", &height2); 
		scanf("%d", &age2); 
		
		printf ("Name 1: %s\n", name1);
		printf ("Height 1: %.2lf\n", height1);
		printf ("Age 1: %d\n", age1);
		
		printf ("Name 2: %s\n", name2);
		printf ("Height 2: %.2lf\n", height2);
		printf ("Age 2: %d\n", age2);
	
	return 0;
}
