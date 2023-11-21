#include <stdio.h>

int main(){
	int grade,i,n,FF=0,FD=0,DD=0,DC=0,CB=0,BA=0;
	printf("please enter the number of grades:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("enter the grade:");
	scanf("%d",&grade);
	if(grade<45){FF++;}	
	else if(grade<55){FD++;}
	else if(grade<60){DD++;}
	else if(grade<70){DC++;}
	else if(grade<85){CB++;}
	else{BA++;}
	}
	printf("FF = %d\nFD = %d\nDD = %d\nDC = %d\nCB = %d\nBA = %d\n",FF,FD,DD,DC,CB,BA);
	
	return 0;
}
