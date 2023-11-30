#include <stdio.h>
#include <stdlib.h>

struct customarry {
    int x;
    int y;
    int z;
    int typesize;
    int *ptr;
};

void create(struct customarry *m) {
    m->ptr = (int *)malloc(m->x * m->y * m->z * m->typesize);
}

void print(struct customarry *m) {
	int i,j,k;
    for (k = 0; k < m->z; k++) {
        printf("z = %d\n", k);
        for (j = m->y - 1; j >= 0; j--) {
            for (i = 0; i < m->x; i++) {
                printf("%d ", *(m->ptr + k * m->y * m->x + j * m->x + i));
            }
            printf("\n");
        }
        printf("----------------------\n");
    }
}

int main() {
    struct customarry matrix = {3, 3, 3, sizeof(int)};
    create(&matrix);
	int z,y,x;
	
    // Test için matrisi doldur
    for (z = 0; z < matrix.z; z++) {
        for (y = 0; y < matrix.y; y++) {
            for (x = 0; x < matrix.x; x++) {
                *(matrix.ptr + z * matrix.y * matrix.x + y * matrix.x + x) = z * matrix.y * matrix.x + y * matrix.x + x;
            }
        }
    }

    // Matrisi yazdýr
    print(&matrix);

    // Bellekten ayrýlan alaný serbest býrak
    free(matrix.ptr);

    return 0;
}

