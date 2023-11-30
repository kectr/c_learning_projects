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


double sumoffactors(int n){
	double sum  = 0;
	int i;
	for(i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(i*i == n){
				sum+=i;
			}else{
				sum += i + n/i;
				printf("%d - %d",i,n/i);
				printf("\n");
			}
			
		}		
	}
	
	if(n==1)sum=1;
	
	return sum;
}

int main(){
	double input;
	while(1){
		printf("Please enter a number:");
		scanf("%lf",&input);
		if(input<=0){
			break;
		}
		if(isPrime(input)==1){
			printf("%lf is prime number\n",input);
		}else{
			printf("%lf is not prime number\n",input);
			printf("Sum of factors of %lf is %lf\n",input,sumoffactors(input));
		}		
	}
	printf("You entered invalid number program will be terminated!!!\n");
	return 0;
}
