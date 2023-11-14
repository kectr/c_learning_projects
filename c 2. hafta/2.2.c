#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    printf("Enter the coefficients of the second degree equation as ax^2+bx+c \n");

    printf("Enter a=");
    scanf("%lf",&a);

    printf("Enter b=");
    scanf("%lf",&b);

    printf("Enter c=");
    scanf("%lf",&c);

    double delta = pow(b,2)-4*a*c;

    if (a == 0){
        printf("a can not be 0!!!");
        return 1;
    }
    if (delta<0){
        printf("This second degree equation doesn't have any Real Number roots.\n");
        printf("(Because Delta(%lf) is less then zero.\n)",delta);

    }else if(delta==0){
        printf("This second degree equation have just one Real Number root.\n");
        printf("(Because Delta(0) is zero.)\n");
        printf("Root of this second degree equation is %lf\n", -b/(2*a));
    }else{
        printf("This second degree equation have two Real Number roots.\n");
        printf("(Because Delta(%lf) is greater then zero.)\n",delta);
        double x1 = (-b + sqrt(delta))/(2*a);
        double x2 = (-b - sqrt(delta))/(2*a);
        printf("Roots of this second degree equation are %lf and %lf .\n",x1,x2);
    }


    return 0;
}

