#include <stdio.h>

int main(){
    int lenght = 0;
    printf("Please enter length of array : ");
    scanf("%d",&lenght);
    double array[lenght];
    for(int i = 0;i<lenght;i++){
        printf("%d. index : ",i);
        scanf("%lf",&array[i]);
    }

    double sum = 0;
    for(int i = 0;i<lenght;i++){
        sum += array[i];
    }

    printf("Avarage is %lf",sum/lenght);
    
    return 0;
}