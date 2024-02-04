#include <stdio.h>
#include <stdlib.h>

float *analize(float *array, unsigned int len)
{
    float *result = (float *)malloc(sizeof(float) * 3);
    // result[0] = mean_value ;result[1] = min ; result[2] = max

    result[1] = result[2] = array[0];

    for (int i = 0; i < len; i++)
    {
        if (result[1] > array[i])
        {
            result[1] = array[i];
        }
        if (result[2] < array[i])
        {
            result[2] = array[i];
        }
        result[0] += array[i];
    }

    result[0] /= len;

    return result;
}

int main()
{
    int len;
    do
    {
        printf("Please enter lenght of array(lenght has to be greater than 0)\n");
        scanf("%d", &len);
    } while (len <= 0);

    float array[len];

    for (int i = 0; i < len; i++)
    {
        printf("%d. index :", i);
        scanf("%f", &array[i]);
    }

    float *result = analize(array, len);
    printf("Mean value : %f\n", result[0]);
    printf("Min : %f\n", result[1]);
    printf("Max : %f\n", result[2]);
    return 0;
}