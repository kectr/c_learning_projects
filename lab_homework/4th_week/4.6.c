#include <stdio.h>

int sum_of_odds(int start, int stop){
	int sum=0;
	for(start = (start % 2 == 0 ? start + 1 : start);start <= stop;start+=2){
		sum += start;
	}	
	return sum;	
}


int main(){
	int first,second;
	printf("Please enter two numbers for range\n");
	printf("First number:");
	scanf("%d",&first);
	printf("Second number:");
	scanf("%d",&second);
	if(first<=second){
		printf("Sum of odds is %d\n",sum_of_odds(first,second));
	}else{
		printf("Sum of odds is %d\n",sum_of_odds(second,first));
	}
	
	return 0;
}
