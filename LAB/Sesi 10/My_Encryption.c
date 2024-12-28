#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
	
	int i, j, testcase;
	
	scanf("%d", &testcase);
	for(i = 0; i < testcase; i++){
		char str[501];
		scanf("%s", str);
		
		for(j = 0; j < strlen(str); j++){
			if(islower(str[j])){
				if(str[j] + 3 <= 122){
					str[j] = (str[j] + 3);
				} else{
					str[j] = toupper((str[j] + 3 - 26));
				}
			} else if(isupper(str[j])){
				if(str[j] + 3 <= 90){
					str[j] = (str[j] + 3);
				} else{
					str[j] = (str[j] + 3 - 42);
				}
			} else{
				if(str[j] + 3 <= 57){
                    str[j] = (str[j] + 3);
                } else{
                    str[j] = (str[j] + 3 + 39);
                }
			}
		}
		printf("Case #%d: ", i + 1);
		for(j = 0; j < strlen(str); j++){
			printf("%c", str[j]);
		}
		printf("\n");
	}	
	
	
	return 0;
}
