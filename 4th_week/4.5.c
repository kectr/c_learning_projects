#include <stdio.h>

double calculatepayment(double h_in){
	double payment;
	if(h_in<=3){
		return 2;
	}else if(h_in>=24){
		return 10;
	}else{
		payment = 2 + (h_in-3)*0.5;
		return (payment>=10?10:payment);
	}
}

int main(){
	double sum = 0,time[3];
	int i;
	for(i = 0 ; i < 3 ; i++){
		printf("Please enter %d. costumer's parking time:",i+1);
		scanf("%lf",&time[i]);
	}
	
	for(i = 0 ; i < 3 ; i++){
		printf("%d. costumer : %.2lf TL\n",i+1,calculatepayment(time[i]));
		sum += calculatepayment(time[i]);
	}
	printf("Total revenue = %.2lf\n",sum);
	
	return 0;
}
