#include<stdio.h>

int main(){

	int hourstart, hourend;
	int minutestart, minuteend;
	char coursecode[10];
	char sch[4][100];
	int i;

		for (i = 0; i < 5; i++){
			scanf("%s %d:%d-%d:%d", coursecode, &hourstart, &minutestart, &hourend, &minuteend); getchar();	
				if (hourstart >= 8 && hourend <= 20){
						hourstart -= 1;
						hourend -= 1;
					sprintf(sch[i], "%s %02d:%02d-%02d:%02d", coursecode, hourstart, minutestart, hourend, minuteend);
				}
		}
		for(i = 0; i < 5; i++){
			printf("%s\n", sch[i]);
		}
		
	return 0;
}
