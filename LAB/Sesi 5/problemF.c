#include<stdio.h>

int main(){
	
	int i, j, testcase;
	long long int a, b, c;
	scanf("%d", &testcase);
	char cout[testcase][100];
	
	for(i = 0; i < testcase; i++){
		scanf("%d %d %d", &a, &b, &c);
		if(c <= b <= a && c + b > a){
			sprintf(cout[i], "BISA");
		} else{
			sprintf(cout[i], "TIDAK BISA");
		}
	}
	for(j = 0; j < testcase; j++){
		printf("%s\n", cout[j]);
	}
	
	return 0;
}
