#include <stdio.h>

int main(){
	int i,num2=0,num3=1;
	
	for (i=0;i<20;i++){
		printf("%d\n",num2);
		num2+=num3;
		printf("%d\n",num3);
		num3+=num2;
		
	}
	
	
}
