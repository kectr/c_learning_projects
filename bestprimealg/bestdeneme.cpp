#include <stdio.h>
#include <math.h>

int isPrime(double n){
	int i;
	
	if(n<=1){return 0;}
	
	for(i = 2;i<=sqrt(n);i++){
		if((int)(n)%i==0){
			return 0;
		}
	}
	return 1;
}

double nofprime(int x){
	double sum=0;
	int i;
	for(i = 0; i<=x;i++){
		if(isPrime(i)==1){
			sum ++;
		}
		
	}
	return sum;
}

double pi(int x){
	return x/log10(x);
}

int main(){
	/*
	int i;
	double pii,nofprimee;
	for(i = 2;i<100000;i++){
		pii = pi(i);
		nofprimee = nofprime(i);
		printf("%lf - ",pii);
		printf("%.0lf = ",nofprimee);
		printf("%lf\n",nofprimee/pii);
	}
	*/
	
	double x;
	while(1){
		printf("x = ");
		scanf("%lf",&x);
		double pii = pi(x);
		double nofprimee = nofprime(x);
		double sonuc = pi(x)-nofprime(x);
		printf("%lf\n",sonuc);
		printf("%lf\n",sonuc/nofprimee);
		
	}
	
	
}
