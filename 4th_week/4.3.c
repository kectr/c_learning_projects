#include <stdio.h>


double gpa(double mid1,double final1,double mid2,double final2){
	return (mid1 + mid2 + final1 + final2)/4.0;
}

int main(){
	int i,j;
	double mid1,final1,mid2,final2;
	for(i = 1; i<4;i++){
		printf("Enter %d. students 1. courses midterm grade:",i);
		scanf("%lf",&mid1);
		printf("Enter %d. students 1. courses final grade:",i);
		scanf("%lf",&final1);
		printf("Enter %d. students 2. courses midterm grade:",i);
		scanf("%lf",&mid2);
		printf("Enter %d. students 2. courses final grade:",i);
		scanf("%lf",&final2);
		printf("%d. students gpa is %lf\n",i,gpa(mid1,final1,mid2,final2));		
	}
	
	
	return 0;
}


