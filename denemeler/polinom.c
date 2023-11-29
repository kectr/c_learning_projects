#include <stdio.h>
#include <math.h>

int mutlak(int a){return (a<0?-a:a);}

int main(){
    while(1){
        int degree=0,i=0,rangecor=0,x,y,rightside=0;
        printf("Please enter the degree of polinomial:");
        scanf("%d",&degree);
        int coef[degree+1];
        for(i=0;i<degree+1;i++){
            printf("Enter the x^%d coefficient:",i);
            scanf("%d",&coef[i]);
        }
        printf("Please enter the range of corinate system:");
        scanf("%d",&rangecor);
        for(y=rangecor;y>=-rangecor;y--){
            for(x=-rangecor;x<=rangecor;x++){
                rightside = 0;
                for(i=0;i<degree+1;i++){
                    rightside += coef[i]*lround(pow(x,i));
                }
                if (rightside == y){
                    printf(".");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}
