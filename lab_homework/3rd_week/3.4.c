#include <stdio.h>

double comb(int n,int k){
	double memo[n+1][k+1];
	int i,j;
	for(i=0;i<=n;i++){
		for(j=(i<= n-k ? 0 : i - n + k);j <= (i < k ? i : k);j++){
			if(j==i || j==0){
				memo[i][j] = 1;
			}else{
				memo[i][j] = memo[i-1][j] + memo[i-1][j-1];
			}
		}
	}
	return memo[n][k];
}


int main(){
	int x,r;
	while(1){
		printf("Enter in format C(x,r)(to close program enter 0)\n");
		printf("Enter x:");
		scanf("%d",&x);
		
		if(x<0){
			printf("You must enter a positive number.");
			continue;
		}else if(x==0){
			printf("Program is terminated\n");
			return 1;
		}
		
		printf("Enter r:");
		scanf("%d",&r);
		
		if(r<0){
			printf("You must enter a positive number.");
			continue;
		}else if(r==0){
			printf("Program is terminated\n");
			return 1;
		}
		
		if(r>x){
			printf("r can not be bigger than x\n");
			continue;
		}
		
		printf("C(%d,%d) = %.0lf\n",x,r,comb(x,r));
		
		
		
	}
	return 0;
}
