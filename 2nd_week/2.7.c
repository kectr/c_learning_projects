#include <stdio.h>
#include <math.h>

int main(){
    int dgt_4;
    printf("Enter a 4 digit-number:\n");
    scanf("%d",&dgt_4);
    
    if(999<dgt_4&&dgt_4<10000){
    	int i;
    	for(i=0;i<4;i++){
    		int digit = (int)(dgt_4/pow(10,i))%10;
    		printf("%d. digit is %d\n",i+1,digit);
		}
	}else{
		printf("numeros no validas");
	}
return 0;
}

