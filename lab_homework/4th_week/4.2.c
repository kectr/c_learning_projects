#include <stdio.h>
#include <math.h>

double rad(double degree){return degree*M_PI/180.0;}
double dgr(double radyan){return radyan * 180.0 / M_PI;}

double maxfunc(double arr[],int len){
	int i;
	double max = arr[len-1];
	for(i = len - 1;i>= 0; i--){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;	
}

void costhrm(double a,double b,double degree){
	degree = rad(degree);
	double c = sqrt(a*a + b*b -2*a*b*cos(degree));
	double k = c / sin(degree);
	double lenghts[3] = {a,b,c};
	double degree1 = dgr(asin(b/k));
	double degree2 = dgr(asin(a/k));
	
	double maxlenght = maxfunc(lenghts,3);
	
	if(maxlenght == a){
		if(degree1+degree<90){
			degree2 = 180 - degree2;
		}
	}else if(maxlenght == b){
		if(degree2+degree<90){
			degree1 = 180 - degree1;
		}
	}
	printf("Lenght of other edge is %lf\n",c);
	printf("Other angles are %lf and %lf",degree1,degree2);	
}


int main(){
	double a,b,degree;
	printf("Please enter a,b,and degree for other values.\n");
	printf("Enter a:");
	scanf("%lf",&a);
	printf("Enter b:");
	scanf("%lf",&b);
	printf("Enter degree:");
	scanf("%lf",&degree);
	
	costhrm(a,b,degree);		
	
	return 0;
}
