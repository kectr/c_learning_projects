#include <stdio.h>

int main() {
    float l1,l2,l3;
    printf("Please enter triangels edge lengths.\n");

    printf("First edge lenght: \n");
    scanf("%f",&l1);

    printf("Second edge lenght: \n");
    scanf("%f",&l2);

    printf("Third edge lenght: \n");
    scanf("%f",&l3);

    if((l1==l2)&&(l2==l3)){
        printf("This triangel is equilateral triangel.\n");

    }else if((l1==l2)||(l1==l3)||(l3==l2)){

        printf("This triangel is isosceles triangel.\n");

    }else{
        printf("This triangel is diverse triangel.\n");
    }

    return 0;
}

