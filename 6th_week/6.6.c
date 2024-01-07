#include <stdio.h>
#include <stdlib.h>

int *sorted(const int *array, const int len)
{
    int temp;
    int *sorted_array = (int *)malloc(sizeof(int) * len);
    for (int i = 0; i < len; i++)
    {
        sorted_array[i] = array[i];
    }

    for (int j = 0; j < len; j++)
    {
        for (int i = 0; i < len - 1; i++)
        {
            if (sorted_array[i] > sorted_array[i + 1])
            {
                temp = sorted_array[i];
                sorted_array[i] = sorted_array[i + 1];
                sorted_array[i + 1] = temp;
            }
        }
    }
    return sorted_array;
}

int main()
{
    int len;
    do
    {
        printf("Please enter lenght(>0) :");
        scanf("%d", &len);
    } while (len <= 0);
    int array[len];
    for (int i = 0; i < len; i++)
    {
        printf("%d-", i);
        scanf("%d", &array[i]);
    }

    int *sorted_array = sorted(array, len);

    printf("Sorted array is:\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", sorted_array[i]);
    }
    return 0;
}