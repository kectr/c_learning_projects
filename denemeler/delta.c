#include <stdio.h>

int main(){
	double a,b,c,delta;
	printf("enter coefficent form second degree equation in form of (ax^2+bx+c)");
	printf("Enter a = ");
	scanf("%lf",&a);
	printf("Enter b = ");
	scanf("%lf",&b);
	printf("Enter c = ");
	scanf("%lf",&c);
	
	delta = b*b - 4 * a * c;

	if(delta>0)printf("case1");
	else if(delta==0)printf("case2");
	else if(delta<0)printf("case3");
	
	return 0;

}
