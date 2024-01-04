#include <stdio.h>




 


struct screen
{

};

int func(struct screen sc){
    return 1;
}

int main(){
    struct screen sa;
    printf("%d",func(sa));

    
}