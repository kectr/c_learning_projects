#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int i,j,x,tip = 0;
    
    int mutlak(x){
        if(x>=0){
            return x;
        }else{
            return -x;
        }
    }
    
    void square(){
        int lenght_square = 0;
        printf("Select lenght of square\n");
        scanf("%d",&lenght_square);
        printf("Square with l = %d:\n",lenght_square);
        for(i = 0; i < lenght_square; i++){
            for(j = 0; j < lenght_square ; j++){
            printf("*");
            }
            printf("\n");
        }
    }
    
    void star(){
        int lenght_star,r,a = 0;
        printf("Select lenght of star\n");
        scanf("%d",&lenght_star);
        if(lenght_star%2 == 1){
            printf("Star with r = %d:\n",lenght_star);
            for(i = 0; i < lenght_star*2 + 1;i++){
                for(a = 0; a < mutlak(lenght_star-i);a++){
                    printf(" ");
                }
                for(a = 0;a <2*(5- mutlak(-i+lenght_star))+1;a++){
                   printf("*"); 
                }
                for(a = 0; a < mutlak(lenght_star-i);a++){
                    printf(" ");
                }
                printf("\n");
            }
            
        }else{
            
        }
        
    }
    
    int ask(){
        printf("Select type \n1:square\n2:star\n0:exit\n");
        scanf("%d",&tip);
        if(tip == 1){
            square();
        }else if(tip == 2){
            star();    
        }else if(tip == 0){
            printf("Exiting...\n");
            return 0;
        }else{
            printf("Invalid type");
            ask();
        }
    } 
    
    ask();
    return 0;
}
