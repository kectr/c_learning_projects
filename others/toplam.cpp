#include <stdio.h>


double factorial(int n) {
		if (n == 0 || n == 1){
			return 1;
		}else{
			return n*factorial(n-1);
		}	
	}


int main(){
	printf("%lf",factorial(100));
}


/*
int main(){
	int i=30;
	double cevap;
	for(i;i>=0;i--){
		cevap += (double)1/(double)factorial(i);
	}
	printf("%lf",cevap);
	
}
*/
