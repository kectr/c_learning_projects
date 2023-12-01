#include <stdio.h>

int *d2_cordinates(int l3_y,int x,int y,int z){
	int *retptr = (int*)malloc(sizeof(int)*2);
	*(retptr+1) = l3_y*z + y ;
	*(retptr) = x;
	return retptr;	
}


int main(){	
	int *ptr = d2_cordinates(10,10,9,10);
	
	printf("%d-%d\n",*ptr,*(ptr+1));	
}
