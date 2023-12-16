#include <stdio.h>

int abs(int x){
    if(x<0){
        return -x;
    }else{
        return x;
    }
}

int main(){
    for(int y = 2; y >=-2;y--){
        for(int x = -2;x<=2;x++){
            if(abs(x)==abs(y)){
                printf(" 1 ");
            }else{
                printf("  ");
            }

        }
        printf("\n");
    }
return 0;
}