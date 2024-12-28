#include<stdio.h>

int main(){
	
	int i;
	float ips[2];
	int sks[2];
	for (i = 0; i < 2; i++){
		printf("Masukkan nilai IPS dan SKS \nContoh: (3.5 18)\nNilai IPS & SKS= ");
		scanf("%f %d", &ips[i], &sks[i]);
		if(ips[i] > 3.00){
			if(sks[i] == 20){
				printf("Selamat, anda dalam perjalanan yang benar\n");
			} else if (sks[i] < 20 && sks[i] >= 15){
				printf("Sudah baik, tetapi coba cek lagi matakuliah yang gagal, jangan lupa daftar SP\n");
			}
		} else if(ips[i] >= 2.00 && ips[i] <= 3.00 && sks[i] >= 15){
			printf("Ayo tingkatkan cara belajarnya\n");
		}
		if (ips[i] < 2.00){
			printf("Lebih semangat lagi untuk belajar, jangan lupa daftar sebagai kelas monitoring\n");
		}
		if (sks[i] < 15){
			printf("Lebih semangat lagi untuk belajar, coba cek matakuliah apa saja yang gagal dan jangan lupa\n");
		}
		printf("\n");
	}
	return 0;
}
