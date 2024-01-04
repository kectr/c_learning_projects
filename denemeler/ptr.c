#include <stdio.h>

void take_cube(int *x){
    *x = (*x)*(*x)*(*x);
}

int main(){
    int x = 3;
    int *ptr;
    ptr = &x;
    take_cube(ptr);
    printf("%d",*ptr);

    return 1;
}