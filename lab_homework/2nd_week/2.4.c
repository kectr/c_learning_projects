#include <stdio.h>

int main(){
    int int_array[3] = {0,0,0},int_temp;
    printf("Enter 3 integers to sort.\n");
    int i;
    for(i=0;i<3;i++){
        printf("Enter %d. integer:",i+1);
        scanf("%d",&int_array[i]);
    }
    if (int_array[0]>int_array[1]){
        int_temp = int_array[1];
        int_array[1] = int_array[0];
        int_array[0] = int_temp;
    }
    if (int_array[1]>int_array[2]){
        int_temp = int_array[2];
        int_array[2] = int_array[1];
        int_array[1] = int_temp;
    }
    if (int_array[0]>int_array[1]) {
        int_temp = int_array[1];
        int_array[1] = int_array[0];
        int_array[0] = int_temp;
    }
    printf("Sorted integers are:\n");
    for(i=0;i<3;i++){
        printf("%d ",int_array[i]);
    }
    return 0;
}
