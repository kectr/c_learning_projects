#include <stdio.h>

int func(int a);
void callbyref(int *a);

int main(){
    int x = 5;
    //= func(x);
    printf("%d\n",x);
    int *ptr = &x;
    callbyref(ptr);
    printf("%d\n",*ptr);


}

int func(int a){
    return a*a*a;
}

void callbyref(int *a){
    *a = *a * *a * *a;
}