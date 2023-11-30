#include <stdio.h>
#include <stdlib.h>

int *a3toa2(int a3[], int a3_x, int a3_y, int a3_z) {
    int *a2 = (int *)malloc(a3_x * a3_y * a3_z * sizeof(int));
    int x, y, z;

    for (x = 0; x < a3_x; x++) {
        for (y = 0; y < a3_y; y++) {
            for (z = 0; z < a3_z; z++) {
                a2[x * (a3_y * a3_z) + y * a3_z + z] = a3[x * (a3_y * a3_z) + y * a3_z + z];
            }
        }
    }

    return a2;
}

void printlist(int *listem, int list_x, int list_y, int list_z) {
    int x, y, z;

    for (z = 0; z < list_z; z++) {
        printf("z = %d\n", z);
        for (y = 0; y < list_y; y++) {
            for (x = 0; x < list_x; x++) {
                printf("%d ", listem[x * (list_y * list_z) + y * list_z + z]);
            }
            printf("\n");
        }
        printf("----------------------\n");
    }
}

int main() {
    int a3[5][5][5];
    int *matrix;
    int x, y, z;

    // Matrisi x + y + z deðerleriyle doldur
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 5; y++) {
            for (z = 0; z < 5; z++) {
                a3[x][y][z] = x + y + z;
            }
        }
    }

    // 3D matristen 2D matrise dönüþtür
    matrix = a3toa2((int *)a3, 5, 5, 5);

    // 2D matrisi yazdýr
    printlist(matrix, 5, 25, 1);
    
    printlist(*a3, 5, 5, 5);

    // Bellekten serbest býrak
    free(matrix);

    return 0;
}

