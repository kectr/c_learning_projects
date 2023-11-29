#include <stdio.h>
#include <math.h>

double mainmeasure(double x){
	return fmod(x,2*M_PI);
}

double fac(int n){
	double mult = 1;
	int i;
	for(i = 2;i<=n;i++){
		mult *= i;
	}
	return mult;
}


double sinx(double x){
	x = mainmeasure(x);
	if(x<-M_PI/2 || x>M_PI/2){
		x = M_PI - x;
	}
	int n;
	double sum=0;
	for(n=0;n<=5;n++){
		sum+=pow(-1,n)*pow(x,2*n+1)/fac(2*n+1);
	}
	return sum;	
}

double cosx(double x){
	x = mainmeasure(x);
	if(x < 0 || x > M_PI){
		x = 2*M_PI - x;
	}
	int n;
	double sum=0;
	for(n=0;n<=6;n++){
		sum+=pow(-1,n)*pow(x,2*n)/fac(2*n);
	}
	return sum;	
}

int main(){
	double x;
	printf("Enter x value for sin(x) and cos(x) as radian\n");
	scanf("%lf",&x);
	printf("sin(%lf) = %lf\n",x,sinx(x));
	printf("cos(%lf) = %lf\n",x,cosx(x));

	return 0;	
}
