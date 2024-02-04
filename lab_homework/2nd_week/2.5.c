#include <stdio.h>

int main(){
    float pro_1,pro_2;
    
	printf("Enter first product\n");
	scanf("%f",&pro_1);
	
	printf("Enter second product\n");
	scanf("%f",&pro_2);
	
	if ((pro_1+pro_2)>=200){
		printf("Total is %f",(pro_1+pro_2*0.75));
	}else{
		printf("Total is %f",(pro_1+pro_2));
	}
	    
    
    return 0;
}

