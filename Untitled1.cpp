#include <stdio.h>
#include <math.h>


int main(){
	
	//Question 1.1
	/*
	int number;		//Kullan�c�dan al�nacak de�er i�in de�i�ken
	
	printf("Enter a number:\n");		//Kullan�c�ya bilgilendirme
	scanf("%d",&number);				//KUllan�c�dan de�er al�n�r ve number adl� de��kene yaz�l�r
	
	printf("number = %d\n",number);			//Say� yazd�r�l�r
	printf("number/2 = %d\n",number/2);		//Say�n�n yar�s� yazd�r�l�r
	*/
	
	//Question 1.2
	
	
	int td_num,units,tens,hundreds;				//3 haneli say� birler onlar ve y�zler basama�� i�in gerekli de�i�kenler tan�mlan�r
	
	printf("Enter a three-digit positive number\n");		//Kullan�c�dan 3 haneli say� istenir
	scanf("%d",&td_num);			//td_num adl� de�i�kene 3 haneli say� at�l�r
	
	if(100 <= td_num <1000){	//Say�n�n 3 haneli olup olmad��� kontrol edilir
	
		hundreds = td_num/100;	//Y�zler basama�� bulunur
		tens = (td_num/10)%10;	//Onlar basama�� bulunur
		units = td_num%10;		//Birler basama�� bulunur
		
		printf("Number is %d\n",td_num); //Say� yazd�r�l�r
		
		printf("Hundreds place: %d\nTens place: %d\nUnits place: %d\n",hundreds,tens,units);		//Say�n�n basamaklar� tek tek yazd�r�l�r
		
		printf("Average of hundreds place and units place is: %.1f \n",(float)(units+hundreds)/2);	 	//Y�zler ve birler basama��n�n ortalamas� al�n�p yazd�r�l�r
	}else{
		printf("Not 3 digit number or negative number for input!!!\n"); 		//E�er say� 3 basamakl� de�il ya da negatifsa hata mesaj� yazd�r�l�r
	}
	
	
	//Question 1.3
	/*
	float angle;		// A�� i�in de�i�ken
	
	printf("Enter exterior angle\n");	//Kullan�c�dan d�� a�� istenir
	scanf("%f",&angle);					//d�� a�� de�eri angle adl� de�i�kene yaz�l�r
	if(0<angle<=120){				//A��n�n uygunlu�u (d�zg�n �okgenlerde d�� a�� maksimmum 120 derce olabilir) kontrol edilir
		if(fmod(360.0,angle) == 0){ //A�� 360 � tam b�lebiliyor mu diye kontrol edilir
			printf("Number of sides is %d\n",(int)(360.0/angle));  //D�zg�n �okgenin kenar say�s� yazd�r�l�r
		}else{
			printf("No regular polgon for given angle!!!\n"); //E�er 360 � tam b�lm�yorsa hata mesaj� yazd�r�l�r
		}
		
	}else{
		printf("Angle cant be greater then 120 or less than 0!!!\n");  //E�er a�� uygun de�ilse hata mesaj� yazd�r�l�r
	}
	*/
	
	//Question 1.4
	/*
	float cost;		//Maliyet i�in de�i�ken
	
	printf("Enter cost\n");		//KUllan�c�dan maliyet istenir
	scanf("%f",&cost);			//Maliyet cost adl� de�i�kene yaz�l�r
	if (cost>=0){				//Maliyetin uygunlu�u (positif) kontrol edilir
	
		printf("1st label price with %%8 KDV is %f\n",cost*1.08);  		//%8 ve %18 kdv li fiyatlar yazd�r�l�r
		
		printf("2nd label price with %%18 KDV is %f\n",cost*1.18);
	}else{
		printf("Negative cost!!!\n");		//Negatif maliyet i�in hata mesaj�
	}
	*/
	
	//Question 1.5
	/*
	float final1,final2,midterm1,midterm2;		// Notlar i�in de�i�kenler
	
	printf("Enter midterm grade for first course:\n");	//Kullan�c�dan notlar�n istenmesi ve atanmas�
	scanf("%f",&midterm1);
	
	printf("Enter final grade for first course:\n");
	scanf("%f",&final1);
	
	printf("Enter midterm grade for second course:\n");
	scanf("%f",&midterm2);
	
	printf("Enter final grade for second course:\n");
	scanf("%f",&final2);
	
	printf("The grade point average for first course is %f\n",(midterm1+final1)/2);		//�lk ders i�in ortalama
	
	printf("The grade point average for second course is %f\n",(midterm2+final2)/2);	//�kinci ders i�in ortalama
	*/
	
	//Question 1.6
	/*
	float r;		//yar��ap i�in de�i�ken
	
	printf("Enter the radius of circle\n");		//Kullan�c�dan yar��ap�n istenmesi ve de�i�kene atanmas�
	scanf("%f",&r);							
	
	printf("Premiter of circle is %f\n",2*M_PI*r);		//�evrenin hesab� ve yazd�r�lmas�
	
	printf("Area of circle is %f\n",M_PI*r*r);			//Alan�n hesab� ve yazd�r�lmas�
	*/
	
	//Question 1.7
	/*
	float a,b;		//�stenecek say�lar i�in de�i�kenlerin se�ilmesi
	
	printf("Enter first number\n");		//Say�lar�n istenmesi ve de�i�kenlere atanmas�
	scanf("%f",&a);
	
	printf("Enter second number\n");
	scanf("%f",&b);
	
	printf("The arithmetic mean of numbers is %.0f\n",round((a+b)/2));	//Aritmetik ve geometrik ortalaman�n hesaplanmas� ve yazd�r�lmas�
	
	printf("The geometric mean of numbers is %.0f\n",round(sqrt(a*b)));
	*/
	
return 0;
}
