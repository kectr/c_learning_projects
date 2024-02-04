#include <stdio.h>

void insert(unsigned int index,int value,int buffer[],int list[],unsigned int lenght_of_list);
void print_list(int list[],unsigned int lenght_of_list);
void reverse(int list[],unsigned int lenght_of_list);
void fill_list(int list[], unsigned int lenght_of_list);
void merge(int list1[],int list2[],unsigned int lenght_of_list1, unsigned int lenght_of_list2,int return_list[]);
float artimetic_avarage(int list[],unsigned int lenght_of_list);
int compare_aritmetic_avarage(int list[],int lenght_of_list);
void bubble_sort(int list[],unsigned int lenght_of_list);


int main(){
    int lenght_of_list1 = 6,list1[lenght_of_list1];
    //int lenght_of_list2 = 7,list2[lenght_of_list2];
    fill_list(list1,lenght_of_list1);
    print_list(list1,lenght_of_list1);
    /*
    fill_list(list2,lenght_of_list2);
    print_list(list2,lenght_of_list2);
    */
    bubble_sort(list1,lenght_of_list1);
    print_list(list1,lenght_of_list1);
    

    

}

void insert(unsigned int index,int value,int buffer[],int list[],unsigned int lenght_of_list){
    for(int i = 0; i < index;i++){
        buffer[i] = list[i];
    }
    buffer[index] = value;
    for(int i = index;i<lenght_of_list;i++){
        buffer[i+1]=list[i];
    }
}

void print_list(int list[],unsigned int lenght_of_list){
    for(int i = 0;i<lenght_of_list;i++){
        printf("%d,",list[i]);
    }
    printf("\n");

}

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

void merge(int list1[],int list2[],unsigned int lenght_of_list1, unsigned int lenght_of_list2,int return_list[]){
    for(int i = 0;i<lenght_of_list1;i++){
        return_list[i]=list1[i];
    }
    for (int j = 0; j < lenght_of_list2; j++){
        return_list[j+lenght_of_list1] = list2[j]; 
    }
}

float artimetic_avarage(int list[],unsigned int lenght_of_list){
    float sum = 0;
    for(int i = 0 ; i<lenght_of_list;i++){
        sum+=list[i];
    }
    return sum/lenght_of_list; 
}

int compare_aritmetic_avarage(int list[],int lenght_of_list){
    if(lenght_of_list%2==1){
        return 0;
    }
    float first_half = artimetic_avarage(list,lenght_of_list/2);
    float second_half = artimetic_avarage(&list[lenght_of_list/2],lenght_of_list/2);
    if(second_half>first_half){
        return 2;
    }else if(first_half>second_half){
        return 1;
    }else{
        return 3;
    }
}

void bubble_sort(int list[],unsigned int lenght_of_list){
    int temp;
    for(int i = 0;i<lenght_of_list-1;i++){
        for(int j = 0;j<lenght_of_list-1;j++){
            if(list[j]>list[j+1]){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}




