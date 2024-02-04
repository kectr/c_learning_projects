#include <stdio.h>

void print_asterix(int n)
{
    for (; n > 0; n--)
    {
        printf("*");
    }
}

int main()
{
    int lenght;

    printf("Please enter lenght of array :");
    scanf("%d", &lenght);
    int array[lenght];

    for (int i = 0; i < lenght; i++)
    {
        printf("%d. index :", i);
        scanf("%d", &array[i]);
    }

    printf("\n\n%-10s%-10s%-10s\n", "Element", "Value", "Histogram");

    for (int i = 0; i < lenght; i++)
    {
        printf("%7d%8d     ", i, array[i]);
        print_asterix(array[i]);
        printf("\n");
    }
    return 0;
}