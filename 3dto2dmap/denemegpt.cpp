#include <stdio.h>

struct Matrix {
    int Size ;
    int matrix[][][]; // Sabit boyut i�in �rnek bir de�er

	void print() {
	    for (int i = 0; i < Size; i++) {
	        printf("i = %d\n", i);
	        printf("--------------------------------\n");
	        for (int j = 0; j < Size; j++) {
	            for (int k = 0; k < Size; k++) {
	                printf("%d ", matrix[i][j][k]);
	            }
	            printf("\n");
	        }
	        printf("\n");
	        printf("-----------------------------------\n");
	    }
	}
	
};


int main() {
    struct Matrix Kemal = {3}; // Boyut sabit oldu�u i�in �rnek bir de�er
    Kemal.print();

    return 0;
}
