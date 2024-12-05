#include <stdio.h>

int main() {
    int i, rolls;
    int posisi = 0;
    int jail = 10, square12 = 28, square35 = 7, range = 40;
    
    scanf("%d", &rolls);
    
    for (i = 0; i < rolls; i++) {
        posisi += dadu();
        
        if (posisi == 30){
        	posisi = jail;
		} else if (posisi == 12){
			posisi = square12;
		} else if (posisi == 35){
			posisi = square35;
		} else if (posisi >= 40){
			posisi -= range;
		}
    }
    
    printf("%d\n", posisi);
    return 0;
}

int dadu() {
    int lemparan;
	do{
    	scanf("%d", &lemparan);
    	if (lemparan < 2 || lemparan > 12) {
            printf("Nilai dadu harus antara 2 dan 12. Silakan masukkan ulang nilai dadu.\n");
        }
	} while (lemparan < 2 || lemparan > 12);
    return lemparan;
}
