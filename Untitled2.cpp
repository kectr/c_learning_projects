/*

|-------------------|
|Hasan Berke KURUBAŞ|
|22111012019		|
|-------------------|

*/

#include <stdio.h>
#include <math.h>

int main()
{
	//QUESTION 1.1
	
	/*
	int x;
	//printf("enter a number: ");
	scanf("%d", &x);
	if(x==20)
	{
		//printf("%d\n", x);
		printf("number = %d\n\n", x);
		printf("number/2 = %d", x/2);
	}
	*/
	
	
	
	
	//QUESTION 1.2
	
	
	int n, temp, m, digits = 0;
	
	printf("enter an integer: ");	//kullanıcıdan sayı iste
	scanf("%d", &n);
	
	if (n < 0)						//sayı negatif
	{
        n = -n;
        printf("it's negative\n");
    }
    else if (n > 0) 				//sayı pozitif
	{
        printf("it's positive\n");
    }
    else							//sayı nötr
    {
    	printf("the number you've entered is 0 and it has 1 digit\n");
    	return 1;
	}
    
	temp = n;
	
	while(temp != 0)
	{
		temp/=10;
		digits++;
	}
	
	printf("digits: %d\n", digits); 	//basamak sayısını yaz
	printf("these are: ");

	m = n;
    while (digits > 0)					//basamakları tek tek yaz
	{
        temp = m / pow(10, digits - 1);
        printf("%d ", temp);
        m %= (int)pow(10, digits - 1);
        digits--;
    }
    
    printf("\n%.1f", (float)((n % 10) + ((n / 100) % 10)) / 2);   //birler ve yüzler basamağının ortalamasını yazdır
	
	
    
    
    
    
	//QUESTION 1.3
	
	/*
	float angle;
    
    printf("type exterior angle of a regular polygon: ");			//dış açı iste
    scanf("%f", &angle);

    if (angle <= 0 || angle > 120 || fmod(360.00, angle) != 0)		//dış açının doğruluğunu kontrol et
	{
        printf("invalid angle, it's not a regular polygon");
        return 1;
    }
    else
    {
    	printf("the number of sides of the regular polygon whose exterior angle is %f: %.0f", angle, 360 / angle);		//kenar sayısını belirt
	}*/
	
	
	
	
	//QUESTION 1.4
	
	/*
	float price;
	
	printf("what is the tax free price: ");
	scanf("%f", &price);
	
	printf("1st label price (8%% tax): %f\n", price * 1.08);
	printf("2nd label price (18%% tax): %f", price * 1.18);
	*/
	
	
	
	
	//QUESTION 1.5
	
	/*
	float midTerm1, midTerm2, final1, final2;
	
	printf("the midterm grade of course 1: ");
    scanf("%f", &midTerm1);

    printf("the final grade of course 1: ");
    scanf("%f", &final1);

    printf("the midterm grade of course 2: ");
    scanf("%f", &midTerm2);

    printf("the final grade of course 2: ");
    scanf("%f", &final2);
    
    printf("\nThe GPA of the two courses: %.2f", (midTerm1 + midTerm2 + final1 + final2) / 4);
	*/
	
	
	
	
	//QUESTION 1.6
	
	/*
	float radius;

    printf("enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("the area of the circle is: %.2f\n", M_PI * radius * radius);	//alan yazdır
    printf("the perimeter of the circle is: %.2f", 2 * M_PI * radius);		//çevre yazdır
	*/
	
	
	
	
	//QUESTION 1.7
	
	/*
	float a, b;
	
	printf("enter the 1st number: ");
    scanf("%f", &a);
    
    printf("enter the 2nd number: ");
    scanf("%f", &b);
    
    printf("the arithmetic mean is: %.0f\n", (a + b) / 2);	//bu şekilde tam sayı şeklinde gözüken ve doğru yuvarlanmış sonuç elde edebilirim
    printf("the geometric mean is: %.0f", sqrt(a * b));
	*/
	
	
	
	
	printf("\n\nprogram has successfully finished");
	return 0;
}