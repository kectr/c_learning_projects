#include <stdio.h>

int sizen(int list[]){
	//printf("%d\n",*(list+2));
	int n = sizeof(list)/sizeof(list[0]);
	printf("n = %d",n);
	printf("size of list is %d\n",sizeof(*list));
	return sizeof(list)/sizeof(list+1);
}

int main(){
	int sizecalismiyor(int x[]){
		return sizeof(x)/sizeof(x[0]);
	}
	int list[] = {1,2,3,4,5};
	int n = sizeof(list)/sizeof(list[0]);
	int* ptr ;
	printf("%d\n",sizen(list));
	printf("%zu\n",sizeof(list));
	printf("%d\n",n);
	printf("%d\n",sizecalismiyor(list));

}


