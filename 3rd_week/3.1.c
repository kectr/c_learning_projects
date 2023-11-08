#include <stdio.h>

int main() {
    float a, b, sum = 0;
    for (a = 1; a <= 50; a++) {
        sum += 1 / a;
    }
    printf("Answer for a is %.3f\n", sum);
    sum = 0;
    for (a = 1; a <= 6; a++) {
        for (b = 1; b <= 10; b++) {
            sum += 1 / (a + b);
        }
    }
    printf("Answer for b is %.4f", sum);

}
