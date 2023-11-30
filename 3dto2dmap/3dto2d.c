#include <stdio.h>

int *a3toa2(int a3[],int a3_x,int a3_y,int a3_z){
	int a2[a3_x][a3_y*a3_z];
	int x,y,z;
	
	for(x=0;x<a3_x;x++){
		for(y=0;y<a3_y;y++){
			for(z=0;z<a3_z;z++){
				a2[x][a3_y*z+y];	
			}	
		}	
	}	
} 

void printlist(int *listem,int list_x,int list_y,int list_z){
	int x,y,z;
	
	for(z = 0;z<list_z;z++){
		printf("z = %d\n",z);
		for(y=0;y<list_y;y++){
			for(x=0;x<list_x;x++){
				printf("%d",listem[x * (list_y * list_z) + y * list_z + z]);
			}
			printf("\n");
		}
		printf("----------------------\n");
	}
		
}

int main(){
	int *matrix[5][5][5];
    int x, y, z;

    // Matrisi x + y + z değerleriyle doldur
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 5; y++) {
            for (z = 0; z < 5; z++) {
                *matrix[x][y][z] = x + y + z;
            }
        }
    }
    printlist(matrix,5,5,5);
    
}



