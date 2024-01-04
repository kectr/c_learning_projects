#include <stdio.h>

int is_in(int array[],int lenght,int value){
    for(int i = 0;i<lenght;i++){
        if(array[i]==value){
            return 1;
        }
    }
    return 0;
}

int count_of(int array[],int lenght,int value){
    int count = 0;
    for(int j = 0;j<lenght;j++){
        if(array[j]==value){
            count++;
        }
    }
    return count;
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

    for(int i = 0;i<lenght;i++){
        int count = 0;
        if(is_in(seen,lenght,array[i])){
            continue;
        }else{
            seen[i] = array[i];
        }
        count = count_of(array,lenght,array[i]);
        printf("%d occurs %d times \n",array[i],count);

    }
   
}

