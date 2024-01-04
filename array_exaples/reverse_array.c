#include <stdio.h>

void reverse(int list[],unsigned int lenght_of_list){
    int temp;
    for(int i = lenght_of_list/2-1;i>=0;i--){
        temp = list[i];
        list[i] = list[lenght_of_list-i-1];
        list[lenght_of_list-1-i] = temp;
    }
}

void fill_list(int list[], unsigned int lenght_of_list){
    for(int i = 0; i<lenght_of_list;i++){
        printf("%d. index : ",i);
        scanf("%d",&list[i]);
    }
}

void print_list(int list[],unsigned int lenght_of_list){
    for(int i = 0;i<lenght_of_list;i++){
        printf("%d,",list[i]);
    }
    printf("\n");

}

int main(){
    int lenght_of_list = 6,list[lenght_of_list];
    fill_list(list,lenght_of_list);
    print_list(list,lenght_of_list);
    reverse(list,lenght_of_list);
    print_list(list,lenght_of_list);

}