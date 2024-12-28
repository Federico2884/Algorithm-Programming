

#include<stdio.h>

int main() {
    int i, j, testcase, num, val;
    scanf("%d", &testcase);
    char cout[testcase][101];

    for(i = 0; i < testcase; i++){
        scanf("%d", &num);

        int highest1 = -1000001;
        int highest2 = -1000001; 

        for (j = 0; j < num; j++){
	
            scanf("%d", &val);

            if (val > highest1) {
                highest2 = highest1; 
                highest1 = val; 
            } else if (val > highest2) {
                highest2 = val;
            }
        }
    }
        sprintf(cout[i], "Case #%d: %d", i + 1, highest1 + highest2);
    }
	for(i = 0; i < testcase; i++){
		printf("%s", cout[i]);
	}
	
    return 0;
}
