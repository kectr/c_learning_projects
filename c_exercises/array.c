#include <stdio.h>

void carpi2(int *array,int lenght){
    for(int i = 0;i<lenght;i++){
        *(array+i) = *(array+i) * 2;
    }
}

int main(){
    int lenght;
    printf("Enter lenght of array : ");
    scanf("%d",&lenght);
    int array[lenght],seen[lenght];
    for(int i = 0;i<lenght;i++){
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }

    carpi2(array,lenght);

    for(int i = 0;i<lenght;i++){
        printf("%d",array[i]);
    }


}