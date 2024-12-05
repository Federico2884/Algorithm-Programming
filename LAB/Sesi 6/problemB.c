#include<stdio.h>

int main(){
	
	int i, j, k, size, condition = 1;
	scanf("%d", &size); // baris x kolom
	int array[size][size];
	
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			scanf("%d", &array[i][j]); //masukkan slot baris & kolom
		}
	} 
	
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			for(k = j + 1; k < size; k++){
				if(array[j][i] == array[k][i] || array[i][j] == array[i][k]){
					condition = 0;
				}
			}
		}
	} //pengecekan kondisi
	
	if(condition){
		printf("Yay\n");
	} else{
		printf("Nay\n");
	}
	
	return 0;
}
