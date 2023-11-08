#include <stdio.h>

int main(){
    int number;
    printf("Enter number\n");
    scanf("%d",&number);

    if(0<=number<10){
        printf("Number entered by user is one-digit number\n");
    }else if(10<=number<100){
        printf("Number entered by user is two-digit number\n");
    }else if(100<=number<1000){
        printf("Number entered by user is three-digit number\n");
    }else{
        printf("Number entered by user is more than three-digit number or negative number\n");
    }



    return 0;
}