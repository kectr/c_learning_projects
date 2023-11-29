#include <stdio.h>

float area(float a,float b){
	return(a*b);
}

int main(){
	float a,b;
	while(1){
		printf("Enter a for area:");
		scanf("%f",&a);
		if(a<0){
			printf("You entred non-valid value. Program will be terminated!!!\n");
			break;
		}
		
		printf("Enter b for area:");
		scanf("%f",&b);
		if(b<0){
			printf("You entred non-valid value. Program will be terminated!!!\n");
			break;
		}
		
		printf("Area of rectangle is %f\n",area(a,b));
		
	}
	
	return 0;
}
