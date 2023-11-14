#include <stdio.h>


int fib(int n){
    int n_1=1,n_2=0,i,sum;
    if(n<2){
        return n;
    }else{
        for(i=2;i<=n;i++){
            sum = n_1 + n_2;
            n_2 = n_1;
            n_1 = sum;          
        }
        return n_1;
    }
}

int main(){
	
	
}
