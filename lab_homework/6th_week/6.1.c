#include <stdio.h>

int fonksiyon(int x, int *y, int *z)
{
    x *= (*y);
    (*y) = (*y) * (*y) * x + (*z);
    (*z) = (*y) + x - (*z);
}

void main()
{
    int a, b, c;
    a = 1, b = 2, c = 3;
    fonksiyon(a, &b, &c);
    printf("a=%d b=%d c=%d\n", a, b, c);
    //a=1 b=11 c=10
}
