#include <stdio.h>

int main(){
	while(1){
	int x,y,n=15,r2=100;
	for(y=n;y>=-n;y--){
		for(x=-n;x<=n;x++){
			if(x*x + y*y <= r2 && x*x + y*y >= 50){
				printf("+ ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}

}
	
}
