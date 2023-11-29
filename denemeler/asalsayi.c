#include <stdio.h>

int main(){
	int i , j ;
	for(i = 2 ; i<=100 ; i++){
		for(j = 1; j < i;j++){
			if(i%j == 0 && j!= 1){
				break;
			}else if(j == i-1){
				printf("%d,",i);
			}
			
		}
		
	}
	
}
