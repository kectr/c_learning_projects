#include <stdio.h>
#include <stdlib.h>

int num_of_even(int *array, int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        if (array[i] % 2 == 1)
        {
            sum++;
        }
    }
    return sum;
}

int *only_even(int *array, int len)
{
    int even_num = num_of_even(array, len);
    int *result = (int *)malloc(sizeof(int) * (even_num + 1));
    result[0] = even_num;
    int last_loc = 1;
    for (int i = 0; i < len; i++)
    {
        if (array[i] % 2 == 1)
        {
            result[last_loc] = array[i];
            last_loc++;
        }
    }
    return result;
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

    int *array_even = only_even(array, len);

    printf("Only even numbers:\n");
    int lenght_of_evens = array_even[0];
    for (int i = 0; i < lenght_of_evens; i++)
    {
        printf("%d ", array_even[i + 1]);
    }
    return 0;
}