#include <stdio.h>

void sum_and_product_of_sqr(float num1, float num2, float *sum, float *product)
{
    *product = num1 * num2;
    *sum = num1 * num1 + num2 * num2;
}

int main()
{
    float num1, num2, product, sum;
    printf("Enter first number :");
    scanf("%f", &num1);
    printf("Enter second number :");
    scanf("%f", &num2);
    sum_and_product_of_sqr(num1, num2, &sum, &product);
    printf("Sum squares of numbers is : %f\n", sum);
    printf("Product of numbers is : %f\n", product);
    return 0;
}
