#include <stdio.h>

int main(){
    int num_cases, i;
    scanf("%d", &num_cases);
	char cout[num_cases][100];

    for (i = 0; i < num_cases; i++){
        int lili, bebe;
        scanf("%d %d", &lili, &bebe);

        int sumx = lili;
        int sumy = bebe;

        while (sumx != sumy){
            if (sumx >= sumy){
                break;
            }
            sumx += 4;
            sumy -= 5;
        }
		//printf("%d %d\n", sumx, sumy);

        if (sumx == sumy){
            sprintf(cout[i], "Case #%d: %d\n", i + 1, sumx);
        } else{
            sprintf(cout[i], "Case #%d: Possiblen't\n", i + 1);
        }
    }
    for(i = 0; i < num_cases; i++){
    	printf("%s", cout[i]);
	}

    return 0;
}

