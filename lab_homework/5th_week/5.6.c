#include <stdio.h>

void min_max(int array[],int len,int result[2]){
    result[0]= result[1] = array[0];
    for(int i = 0;i<len;i++){
        if(array[i]>result[1]){
            result[1] = array[i];
        }else if(array[i]<result[0]){
            result[0] = array[i];
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
        for(int i = 0;i<lenght;i++){
            printf("%d. index : ",i);
            scanf("%d",&array[i]);
        }
        min_max(array,lenght,result);
        printf("min : %d\nmax : %d\n",result[0],result[1]);
    }
}
