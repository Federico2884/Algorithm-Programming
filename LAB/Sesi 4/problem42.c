#include<stdio.h>

int main(){
	
	int i,j,k;
	int _case;
	long long int totalprice;
	
	scanf("%d", &_case);
	char cout[_case][100];
	
	int menu[_case];
	long long int money[_case];
	
	for(i = 0; i < _case; i++){
		scanf("%d %lld", &menu[i], &money[i]);
		
		long long int price[menu[i]];
		totalprice = 0;
		
		for(j = 0; j < menu[i]; j++){
			scanf("%lld", &price[j]);
		
			totalprice += price[j];
		}
		if(money[i] < totalprice){
			sprintf(cout[i], "Case #%d: Wash dishes\n", i + 1);
		} else{
			sprintf(cout[i], "Case #%d: No worries\n", i + 1);
		}
	}
	for(i = 0; i < _case; i++){
		printf("%s", cout[i]);
	}
	
	
	return 0;
}
