#include <stdio.h>

int mutlak(int sayi){
	return (sayi>=0 ? sayi:-sayi);
}

int main(){
	int x,y,z=5,k=2*z+1;
	for(y=0;y<z;y++){
		for(x=0;x<k;x++){
			if(y<mutlak(x-z)){
				printf(" ");
			}else{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
