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

int main(){
	int sum=0;
	int x;
	scanf("%d",x);
	int i;
	for(i = 0; i<=x;i++){
		if(isPrime(i)==1){
			sum ++;
		}
		
	}
	printf("%d",sum);
}
