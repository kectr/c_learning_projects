#include <stdio.h>

void bubble_sort_to(int array[],int lenght,int result[]){
    int temp = 0;
    for(int i = 0;i<lenght;i++){
        result[i] = array[i];
    }
    for(int i = 0;i<lenght;i++){
        for(int j = 0;j<lenght-1;j++){
            if(result[j]>result[j+1]){
                temp = result[j+1];
                result[j+1] = result[j];
                result[j] = temp;
            }
        }
    }
}

int main(){
    int lenght;
    int result[2];
    while(1){
        printf("Please enter lenght of array enter 0 for exit :");
        scanf("%d",&lenght);
        if(lenght == 0){break;}
        int array[lenght];
        int result[lenght];
        for(int i = 0;i<lenght;i++){
            printf("%d. index : ",i);
            scanf("%d",&array[i]);
        }
        bubble_sort_to(array,lenght,result);
        printf("Sorted aray:\n");
        for(int i =0;i<lenght;i++){
            printf("%d,",result[i]);
        }
        printf("\n");
    }
}