#include <stdio.h>
#include <math.h>

int main(){
	int i,j,count=0;
	printf("prime numbers between 0 and 100 are : \n");
	for(i=2;i<=100;i++){
		count = 0;
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==0){
			printf("%d\n",i);
		}
		
	}
return 0;
}
