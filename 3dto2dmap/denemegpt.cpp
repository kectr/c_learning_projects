#include <stdio.h>

struct Matrix {
    int Size ;
    int matrix[][][]; // Sabit boyut için örnek bir deðer

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
    struct Matrix Kemal = {3}; // Boyut sabit olduðu için örnek bir deðer
    Kemal.print();

    return 0;
}
