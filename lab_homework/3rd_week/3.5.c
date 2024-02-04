#include <stdio.h>


int fib(int n){
    int n_1=1,n_2=0,i,sum;
    if(n<2){
        return n;
    }else{
        for(i=2;i<=n;i++){
            sum = n_1 + n_2;
            n_2 = n_1;
            n_1 = sum;          
        }
        return n_1;
    }
}

int main(){
	int i,sum=0,memo;
	printf("The first 10 elements of the Fibonacci series:\n");
	for(i=0;i<10;i++){
		memo = fib(i);
		printf("%d,",memo);
		sum += memo;
	}
	printf("\n");
	
	printf("Sum of them is %d.",sum);
}
