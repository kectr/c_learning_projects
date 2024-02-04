#include <stdio.h>
#include <math.h>

double fact(int n){
	int i,mult=1;
	for(i=n;i>=1;i--){
		mult *= i;
	}
	return mult;
}


double e(int N){
	int i;
	double sum=0;
	for(i=0;i<=N;i++){
		sum += 1.0/fact(i);
	}
	return sum;
	
}

double etox(int N,int x){
	int i;
	double sum=0;
	for(i=0;i<=N;i++){
		sum += pow(x,i)/fact(i);
	}
	return sum;
	
}



int main(){
	int N,x;
	printf("Enter N and x for e and e^x\n");
	printf("Enter N:");
	scanf("%d",&N);
	printf("Enter x:");
	scanf("%d",&x);
	printf("e for N = %d : %lf\n",N,e(N));
	printf("e to the power %d for N = %d : %lf",x,N,etox(N,x));
	
	return 0;
}
