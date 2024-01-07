#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct matrix
{
    int column;
    int row;
    float *data;
};

void print_matrix(struct matrix mt)
{
    for (int i = 0; i < mt.row; i++)
    {
        for (int j = 0; j < mt.column; j++)
        {
            printf("%.1f ", mt.data[i * mt.column + j]);
        }
        printf("\n");
    }
    printf("\n");
}

void creat_matrix(struct matrix *mt)
{
    mt->data = (float *)malloc(sizeof(float) * (mt->row * mt->column));
}

void take_data(struct matrix mt)
{
    for (int i = 0; i < mt.row; i++)
    {
        for (int j = 0; j < mt.column; j++)
        {
            printf("%d-%d: ", i, j);
            scanf("%f", mt.data + i * mt.column + j);
        }
    }
    printf("Matrix created:\n");
    print_matrix(mt);
}

struct matrix sum_of(struct matrix mt1, struct matrix mt2, int mode)
{
    struct matrix sum = {mt1.column, mt1.row};
    creat_matrix(&sum);
    for (int i = 0; i < mt1.row; i++)
    {
        for (int j = 0; j < mt1.column; j++)
        {
            sum.data[i * sum.column + j] = mt1.data[i * mt1.column + j] + pow(-1, mode) * mode * mt2.data[i * mt1.column + j];
        }
    }
    return sum;
}

int main()
{
    struct matrix mt1;
    struct matrix mt2;

    do
    {
        printf("Please enter column (>0) for matrix: ");
        scanf("%d", &mt1.column);
    } while (mt1.column <= 0);

    do
    {
        printf("Please enter row (>0) for matrix: ");
        scanf("%d", &mt1.row);
    } while (mt1.row <= 0);

    mt2.column = mt1.column;
    mt2.row = mt1.row;

    creat_matrix(&mt1);
    creat_matrix(&mt2);

    take_data(mt1);
    take_data(mt2);

    struct matrix mt_sum = sum_of(mt1, mt2, 0);
    struct matrix mt_diff = sum_of(mt1, mt2, 1);

    printf("Sum of matrices is :\n");
    print_matrix(mt_sum);

    printf("Difference of matrices is:\n");
    print_matrix(mt_diff);

    free(mt1.data);
    free(mt2.data);
    free(mt_sum.data);
    free(mt_diff.data);

    return 0;
}
