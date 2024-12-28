#include<stdio.h>

int main(){
	
	int i;
	int numpar;
	int jojo, lili, bibi;
	int totalscore = 0;
	double avgscore;
	
		scanf("%d", &numpar);
	
	int scorepar[numpar];
	
	scanf("%d %d %d", &jojo, &lili, &bibi);
	
	for(i = 0; i < numpar; i++){
		scanf("%d", &scorepar[i]);
		totalscore += scorepar[i];
	}
	
	avgscore = (double)(totalscore + jojo + lili + bibi) / (numpar + 3);
	
	int jolibi[] = {jojo, lili, bibi};
	char jolibiname[3][100] = {"Jojo", "Lili", "Bibi"};
	
	for(i = 0; i < 3; i++){
		if(jolibi[i] >= avgscore){
			printf("%s lolos\n", jolibiname[i]);
		} else{
			printf("%s tidak lolos\n", jolibiname[i]);
		}
	}
	return 0;
}
