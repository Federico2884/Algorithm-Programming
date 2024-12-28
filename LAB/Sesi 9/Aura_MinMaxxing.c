#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//void swap(int* xp, int* yp){
//    int temp = *xp;
//    *xp = *yp;
//    *yp = temp;
//}
//
//void bubbleSort(int arr[], int n){
//    int i, j;
//    bool swapped;
//    for (i = 0; i < n - 1; i++) {
//        swapped = false;
//        for (j = 0; j < n - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                swap(&arr[j], &arr[j + 1]);
//                swapped = true;
//            }
//        }
//
//        if (swapped == false)
//            break;
//    }
//}

int main(){
	
	int testcase, i, j, temp;
	
	scanf("%d", &testcase);
	int *aura = (int *)malloc(testcase * sizeof(int));
	char name[testcase][256];
	
	for(i = 0; i < testcase; i++){
		scanf("%d %s", &aura[i], &name[i]);
	}
	
	if(testcase % 2 != 0){
		for(i = 0; i < testcase; i++){
			for(j = i; j < testcase; j++){
				if(aura[i] < aura[j]){
					temp = aura[i];
					aura[i] = aura[j];
					aura[j] = temp;
					
					char tempS[256];
					strcpy(tempS, name[i]);
					strcpy(name[i], name[j]);
					strcpy(name[j], tempS);
				}
			}
		}
	} else{
		for(i = 0; i < testcase; i++){
			for(j = i; j < testcase; j++){
				if(aura[i] > aura[j]){
					temp = aura[i];
					aura[i] = aura[j];
					aura[j] = temp;
					
					char tempS[256];
					strcpy(tempS, name[i]);
					strcpy(name[i], name[j]);
					strcpy(name[j], tempS);
				}
			}
		}
	}
	for(i = 0; i < testcase; i++){
		printf("%d %s\n", aura[i], name[i]);
	}
	free(aura);
	return 0;
}
