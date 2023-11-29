#include <stdio.h>


void func(int x[3][2]){
	printf("%d",x[0][0]);
	
}
int main(){
	int listem[3][2] = {{1,2},{3,4},{5,6}};
	func(listem);
	return 0;
}
