#include <stdio.h>

int main(){
	int x = 60;
	printf("x?");
	scanf("%d",&x);
	puts(x>=60 ? "passed" : "failed");
return 0;
}