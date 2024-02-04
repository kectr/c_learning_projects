#include <stdio.h>

int main(){
    int lenght;
    printf("Please enter the lenght of arrays :");
    scanf("%d",&lenght);

    int array1[lenght],array2[lenght],sum[lenght];

    for(int i = 0 ; i< lenght;i++){
        printf("Enter %d. index for first array :",i);
        scanf("%d",&array1[i]);
    }

    for(int i = 0 ; i< lenght;i++){
        printf("Enter %d. index for second array :",i);
        scanf("%d",&array2[i]);
    }

    for(int i = 0; i<lenght;i++){
        sum[i] = array1[i] + array2[i];
    }

    printf("Sum of vectors in array formation :\n");

    for(int i = 0;i<lenght;i++){
        printf("%d,",sum[i]);
    }
    return 0;
}