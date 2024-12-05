#include <stdio.h>

int main() {

	int testcase, initial, i, j, k, max;
	scanf("%d", &testcase); int plate, portion, maxportion[testcase];
	
	for(i = 1; i <= testcase; i++){
		
		scanf("%d %d %d", &plate, &max, &initial);
		
		maxportion[i] = initial; //anggap sebagai batasnya untuk sekarang karena akan diseleksi 1 per 1
		for(j = 1; j <= plate; j++){
			
			scanf("%d", &portion);
			if(portion > maxportion[i] && portion <= max){
				maxportion[i] = portion;
					
			}
		}
	}
	for(k = 1; k <= testcase; k++){
		printf("Case #%d: %d\n", k, maxportion[k]);
	}

    return 0;
}

