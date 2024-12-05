#include<stdio.h>

int main(){
	
	int i,j,k;
	int _case;
	
	scanf("%d", &_case);
	
	char coutodd[_case][100];
	char couteven[_case][100];
	int num[_case];
	
	for(i = 0; i < _case; i++){
		scanf("%d", &num[i]);
		int numval[num[i]];
		int oddcount = 0;
		int evencount = 0;
		
		for(j = 0; j < num[i]; j++){
			scanf("%d", &numval[j]);
			if(numval[j] % 2 !=0){
				oddcount++;
			} else{
				evencount++;
			}
		}
		sprintf(coutodd[i], "Odd group : %d integer(s).\n", oddcount);
		sprintf(couteven[i], "Even group : %d integer(s).\n", evencount);
	}
	for(i = 0; i < _case; i++){
		printf("%s", coutodd[i]);
		printf("%s\n", couteven[i]);
	}
	
	return 0;
}
