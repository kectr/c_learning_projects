#include <stdio.h>

int main(){
    int lenght;

    printf("Please enter lenght of array :");
    scanf("%d",&lenght);
    if(lenght%2 == 0 || lenght <3){
        printf("Enter odd number and greater than 3\n");
        return 0;
    }

    double array[lenght];

    for(int i=0;i<lenght;i++){
        printf("%d. index :",i);
        scanf("%lf",&array[i]);        
    }

    int mid = lenght/2;
    printf("%lf",array[mid]+array[mid+1],array[mid-1]);

}