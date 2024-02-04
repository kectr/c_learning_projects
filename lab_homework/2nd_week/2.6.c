#include <stdio.h>

int main(){
    int number;
    printf("Enter maximum 3-digit number\n");
    scanf("%d",&number);

    if(0<=number&&number<10){
        printf("Number entered by user is one-digit number\n");
    }else if(10<=number&&number<100){
        printf("Number entered by user is two-digit number\n");
    }else if(100<=number&&number<1000){
        printf("Number entered by user is three-digit number\n");
    }else{
        printf("Number entered by user is more than three-digit number or negative number\n");
    }



    return 0;
}
