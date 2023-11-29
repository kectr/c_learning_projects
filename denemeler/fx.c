#include <stdio.h>

int main(){
	double x;
	while(1){
	printf("Enter value for f(x), x = \n");	
	scanf("%lf",&x);
		if(x<0){
			printf("x cannot be less then 0\n");
			continue;
		}
		if(x<=50){
			printf("f(%lf) = %lf\n",x,x+4/x);
		}else if(x<=100){
			printf("f(%lf) = %lf\n",x,-x*x-4);
		}else{
			printf("f(%lf) = %lf\n",x,x*x+x*0.1);
		}	
	}



return 0;
}


