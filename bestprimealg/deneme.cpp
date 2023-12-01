#include <stdio.h>

int main(){
	int x;
	scanf("%d",&x);
	int i,j,sum = 0;
	for(i = 2 ; i<= x;i++){
		for(j = 2; j < i ; j++){
			if(i%j ==0){
				break;
			}else{
				sum ++;
			}
		}
	}
	printf("%d",sum);
	return 0;
	
	
}
