#include <stdio.h>

double abs(double a){
	return (a<0?-a:a);
}

int main(){
	int n,x,y,w,r;
	while(1){
		printf("Enter a positive integer:");
		scanf("%d",&n);
		if (n<0){
			printf("Enter a non-negative number\n");
			continue;
		}else{
			break;
		}
	}
	w = (n%2==0?2*n:2*n-1);
	r = (w - 1)/2.0;
	for(y=0;y<n;y++){
		for(x=0;x<w;x++){
			if(abs(r-x)<y+1){
				printf("%d",(int)(y+1-abs(r-x)));
			}else{
				printf(" ");
			}	
		}
		printf("\n");
	}
}
