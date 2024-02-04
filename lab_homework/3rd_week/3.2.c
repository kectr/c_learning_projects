#include <stdio.h>

int main(){
	int x1,x2,temp;
	printf("Enter 2 values\n");
	printf("Enter first integer\n");
	scanf("%d",&x1);
	printf("Enter second integer\n");
	scanf("%d",&x2);
	
	if(x1>x2){//x2 is larger value
		temp = x2;
		x2 = x1;
		x1 = temp;
	}
	
	int i,sum=0;
	
	for(i=x1/5+1;i<x2/5.0;i++){
		sum+=i;
	}
	sum *=5;

	printf("The sum of numbers that can divisible with 5 between %d and %d is %d",x1,x2,sum);
	
	return 0;
}
