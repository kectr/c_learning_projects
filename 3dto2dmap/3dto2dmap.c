#include <stdio.h>

struct Matrix(int x){
	const int Size = x;
	int matrix[Size][Size][Size];
	int i,j,k;
	for(i = 0 ; i < Size ; i++){
	for(j = 0 ; j < Size ; j++){
	for(k = 0 ; k < Size ; k++){
		matrix[i][j][k] = 0;
	}	
	}	
	}
	void print(){
		for(i = 0 ; i < Size ; i++){
		printf("i = %d\n",i);
		printf("--------------------------------\n");
		for(j = 0 ; j < Size ; j++){
		for(k = 0 ; k < Size ; k++){
			printf("%d"matrix[i][j][k]);
		}
		printf("\n");	
		}
		printf("\n");
		printf("-----------------------------------\n");
		}
	}
};

int main(){
	struct Matrix Kemal = {3};
	Kemal.print();
	
	return 0;
	
}
