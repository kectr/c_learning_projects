#include <stdio.h>

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

int main(){
	double arr[5] = {10,2,5,619090000,132041};
	
	printf("%lf",maxfunc(arr,5));
	
	return 0;
}
