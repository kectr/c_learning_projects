#include <stdio.h>
#include <stdlib.h>


void derivative(double *rule,int rule_power){
	int i;
	for(i=0;i<rule_power;i++){
		*(rule+i) = *(rule+i+1)*(i+1);
	}
	rule[rule_power] = 0; 
}


int main(){
	int n = 4,i;
	double arry[4] = {5,4,5,1};//x^0+x^1+x^2+x^3...
	derivative(arry,3);
	for(i = 0 ; i < n ; i++){
		printf("%lf ",arry[i]);
	}
	
}

