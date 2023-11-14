#include <stdio.h>


long double factorial(int n){
	int i;
	long double mult=1;
	for(i=n;i>=1;i--){
		mult *= i;
	}
	printf("%Lf\n",mult);
	return mult;
}


int main(){
	printf("%Lf",factorial(5));
}
