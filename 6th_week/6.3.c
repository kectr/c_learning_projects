#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float *find_roots(const float *coefs)
{
    float *sonuc = (float *)malloc(sizeof(float) * 3);
    float delta = coefs[1] * coefs[1] - 4 * coefs[0] * coefs[2];
    if (delta < 0)
    {
        sonuc[0] = -1;
        return sonuc;
    }
    else if (0 == delta)
    {
        sonuc[0] = 0;
    }
    else
    {
        sonuc[0] = 1;
    }

    sonuc[1] = -(coefs[1] + sqrt(delta)) / (2 * coefs[0]);
    sonuc[2] = -(coefs[1] - sqrt(delta)) / (2 * coefs[0]);
    return sonuc;
}

int main()
{
    float coefs[3];
    printf("Enter the coefficients of second degree equation(ax^2+bx+c)\n");
    printf("a can not be equal to 0\n");

    for (int i = 0; i < 3; i++)
    {
        do
        {
            printf("%c :", 'a' + i);
            scanf("%f", &coefs[i]);

        } while (i == 0 && coefs[i] == 0);
    }

    float *sonuc = find_roots(coefs);

    if (sonuc[0] == -1)
    {
        printf("This second degree equation does not have any roots for reel numbers\n");
    }
    else if (sonuc[0] == 1)
    {
        printf("Roots are :\n");
        printf("%f\n", sonuc[1]);
        printf("%f\n", sonuc[2]);
    }
    else
    {
        printf("There is only one root :\n");
        printf("%f\n", sonuc[1]);
    }
}