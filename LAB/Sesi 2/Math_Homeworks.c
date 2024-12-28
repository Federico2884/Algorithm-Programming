#include<stdio.h>

int main(){
	
	long long int a,b,c,d,e,f,g,h,i,j,k,l;
		scanf("(%lld+%lld)x(%lld-%lld)", &a, &b, &c, &d); getchar();
		
	long long int result1 = (a+b)*(c-d);
	
		scanf("(%lld+%lld)x(%lld-%lld)", &e, &f, &g, &h); getchar();
	
	long long int result2 = (e+f)*(g-h);
	
		scanf("(%lld+%lld)x(%lld-%lld)", &i, &j, &k, &l); getchar();
	
	long long int result3 = (i+j)*(k-l);
	
	
		printf("%lld %lld %lld\n", result1, result2, result3);
		

	
	return 0;
}
