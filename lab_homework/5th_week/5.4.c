#include <stdio.h>

int abs(int x){
    if(x<0){
        return -x;
    }else{
        return x;
    }
}

int main(){
    int array[5][5];

    for(int y = 2; y >=-2;y--){
        for(int x = -2;x<=2;x++){
            if(abs(x)==abs(y)){
                array[x+2][y+2] = 1;
            }else{
                array[x+2][y+2] = 0;
            }

        }
    }

    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            if(array[i][j]==1){
                printf(" 1 ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }

return 0;
}