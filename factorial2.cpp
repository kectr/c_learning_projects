#include <stdio.h>

double factorial(int n) {
	double num = 1;
	for(n;n>0;n--){
		num *=n;
	}
	return num;		
}

int main(){
	printf("%lf",factorial(100));
}
