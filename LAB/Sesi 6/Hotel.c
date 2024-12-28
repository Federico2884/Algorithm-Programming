#include<stdio.h>

int main(){
	
	int num;
	long long int happy = 0;
	scanf("%d", &num);
	
	long long int i, j, guest[num];
	for(i = 1; i <= num; i++){
		scanf("%lld", &guest[i]);
		
		j = 1;
		while(guest[i] != guest[j]){
			j++; 
			if(j == i){
				happy++;
				break;
			}
		}
	}
	printf("%lld\n", happy);
	
	return 0;
}
