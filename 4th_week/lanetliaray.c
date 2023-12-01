// recursive array find max

#include <stdio.h>

int maxfunc(int arrp[],int lenp){
	if(lenp>=1){
		if(arrp[lenp]>=arrp[lenp-1]){
			arrp[lenp-1] = arrp[lenp];			
		}
		return maxfunc(arrp,lenp-1);
	}else{
		return arrp[lenp];
	}	
}

int main(){
	while(1){
	int len,i,elem;
	
	printf("enter len\n");
	scanf("%d",&len);
	
	int arr[len];
	for(i = 0;i<len;i++){
		printf("element - %d : ",i);
		scanf("%d",&arr[i]);
	}
	printf("largest elemnet of earay is %d\n",maxfunc(arr,len-1));
}
}
