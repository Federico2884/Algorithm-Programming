#include<stdio.h>
#include<string.h>

int main(){
	
	char name[100];
	int id;
	char stringid[100];
	
			scanf ("%[^\n]", name);
			scanf ("%d", &id);
		
	char firstletter = name[0];
	char lastletter = name[strlen(name)-1];
		
	sprintf(stringid, "%d", id);

	if(strlen(stringid) >= 3 && strlen(stringid) <= 8){	
		
		printf("%c%c", toupper(firstletter), toupper(lastletter));
		printf("%c%c%c\n", stringid[0], stringid[strlen(stringid)/2], stringid[strlen(stringid)]-1);
		
	} else{
		return 0;
	}
	
	return 0;
}
