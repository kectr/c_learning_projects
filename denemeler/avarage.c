#include <stdio.h>

int main(){
	int count,i;
	double sum = 0,value;
	
	printf("enter 25 numbers (n<0 or n>100 will not included\n");
	
	for(i=0;i<25;i++){
		printf("Enter the value");
		scanf("%lf",&value);
		if(!(value<0||value>100)){
			sum += value;
			count++;
		}
	
	
	}
	
	printf("Avarage is %lf",sum / count);
	
	return 0;
}
