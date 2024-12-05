#include<stdio.h>

int main(){
	
	int testcase, n, i, j, k, l;
	long long int num[n], temp;
	float mean, median;
	scanf("%d", &testcase);
	char coutcase[testcase][100];
    char coutmean[testcase][100];
    char coutmedian[testcase][100];
    
	for(i = 0; i < testcase; i++){
		scanf("%d", &n);
		long long int sum = 0;
		j = 0;
		
		while(j < n){
			scanf("%lld", num[j]);
			sum+= num[j];
			j++;
		}
		mean = (float) sum / (n-1);
		
		for (k = 1 ; i <= n-1 ; k++){
 			for (l = 1 ; j <= n-k ; l++){
     			if(num[k] <= num[k+1]){
			        temp = num[k];
			        num[k] = num[k+1];
			        num[k+1] = temp;
			    } else
   					continue;
  			}
		}
		if ( n % 2 == 0){
   			median = (num[n/2] + num[n/2+1])/2.0 ;
		} else{
   			median = num[n/2 + 1];
		}
		
		sprintf(coutcase[i], "Case #%d:\n", i + 1);
        sprintf(coutmean[i], "Mean: %.2f\n", mean);
        sprintf(coutmedian[i], "Median: %.2f\n", median);
        
	}
	
	for(i = 0; i < testcase; i++){
    	printf("%s", coutcase[i]);
        printf("%s", coutmean[i]);
        printf("%s", coutmedian[i]);
	}
	
	return 0;
}
