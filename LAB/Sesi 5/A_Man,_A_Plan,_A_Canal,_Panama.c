#include<stdio.h>
#include<string.h>

void strreverse(char *reverse, char *storechar){
	
	int j;
	int length = strlen(storechar) - 1;
	for(j = 0; j <= length; j++){
		reverse[j] = storechar[length - j];
	}
	reverse[length + 1] = '\0'; //untuk menghilangkan array yang bernilai 0/tidak terisi
	
}

void tolowercase(char *str) {
	int i;
    for (i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main(){
	
	int testcase, i;
	scanf("%d", &testcase);
	char words[1001], reversed[1001], cout[testcase][100];
	
	for(i = 1; i <= testcase; i++){
		scanf("%s", words); 
		
		strreverse(reversed, words); 
		tolowercase(reversed); tolowercase(words);
		if(strcmp(reversed, words) == 0){
			sprintf(cout[i], "Case #%d: yes", i);
		} else {
			sprintf(cout[i], "Case #%d: no", i);
		}
		
	} 
	for(i = 1; i <= testcase; i++){
		printf("%s\n", cout[i]);
	}
	
	return 0;
}


