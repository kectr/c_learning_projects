#include <stdio.h>

double f(double x){
	return x;	
}


double hard_integral_of_f(double xi,double xf,int n,int type){
	int k = 0;
	double dx = (xf-xi)/n;
	double sum = 0;
	if(type == 1){n = n-1;}
	for(;k<=n;k++){
		sum +=f(xi+dx*k);
	}
	return sum*dx;	
}


int main(){
	printf("%lf",hard_integral_of_f(0,2,100000000,1));
	
}
