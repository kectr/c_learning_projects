#include <stdio.h>
#include <math.h>


int main(){
	
	//Question 1.1
	/*
	int number;		//Kullanýcýdan alýnacak deðer için deðiþken
	
	printf("Enter a number:\n");		//Kullanýcýya bilgilendirme
	scanf("%d",&number);				//KUllanýcýdan deðer alýnýr ve number adlý deðþkene yazýlýr
	
	printf("number = %d\n",number);			//Sayý yazdýrýlýr
	printf("number/2 = %d\n",number/2);		//Sayýnýn yarýsý yazdýrýlýr
	*/
	
	//Question 1.2
	
	
	int td_num,units,tens,hundreds;				//3 haneli sayý birler onlar ve yüzler basamaðý için gerekli deðiþkenler tanýmlanýr
	
	printf("Enter a three-digit positive number\n");		//Kullanýcýdan 3 haneli sayý istenir
	scanf("%d",&td_num);			//td_num adlý deðiþkene 3 haneli sayý atýlýr
	
	if(100 <= td_num <1000){	//Sayýnýn 3 haneli olup olmadýðý kontrol edilir
	
		hundreds = td_num/100;	//Yüzler basamaðý bulunur
		tens = (td_num/10)%10;	//Onlar basamaðý bulunur
		units = td_num%10;		//Birler basamaðý bulunur
		
		printf("Number is %d\n",td_num); //Sayý yazdýrýlýr
		
		printf("Hundreds place: %d\nTens place: %d\nUnits place: %d\n",hundreds,tens,units);		//Sayýnýn basamaklarý tek tek yazdýrýlýr
		
		printf("Average of hundreds place and units place is: %.1f \n",(float)(units+hundreds)/2);	 	//Yüzler ve birler basamaðýnýn ortalamasý alýnýp yazdýrýlýr
	}else{
		printf("Not 3 digit number or negative number for input!!!\n"); 		//Eðer sayý 3 basamaklý deðil ya da negatifsa hata mesajý yazdýrýlýr
	}
	
	
	//Question 1.3
	/*
	float angle;		// Açý için deðiþken
	
	printf("Enter exterior angle\n");	//Kullanýcýdan dýþ açý istenir
	scanf("%f",&angle);					//dýþ açý deðeri angle adlý deðiþkene yazýlýr
	if(0<angle<=120){				//Açýnýn uygunluðu (düzgün çokgenlerde dýþ açý maksimmum 120 derce olabilir) kontrol edilir
		if(fmod(360.0,angle) == 0){ //Açý 360 ý tam bölebiliyor mu diye kontrol edilir
			printf("Number of sides is %d\n",(int)(360.0/angle));  //Düzgün çokgenin kenar sayýsý yazdýrýlýr
		}else{
			printf("No regular polgon for given angle!!!\n"); //Eðer 360 ý tam bölmüyorsa hata mesajý yazdýrýlýr
		}
		
	}else{
		printf("Angle cant be greater then 120 or less than 0!!!\n");  //Eðer açý uygun deðilse hata mesajý yazdýrýlýr
	}
	*/
	
	//Question 1.4
	/*
	float cost;		//Maliyet için deðiþken
	
	printf("Enter cost\n");		//KUllanýcýdan maliyet istenir
	scanf("%f",&cost);			//Maliyet cost adlý deðiþkene yazýlýr
	if (cost>=0){				//Maliyetin uygunluðu (positif) kontrol edilir
	
		printf("1st label price with %%8 KDV is %f\n",cost*1.08);  		//%8 ve %18 kdv li fiyatlar yazdýrýlýr
		
		printf("2nd label price with %%18 KDV is %f\n",cost*1.18);
	}else{
		printf("Negative cost!!!\n");		//Negatif maliyet için hata mesajý
	}
	*/
	
	//Question 1.5
	/*
	float final1,final2,midterm1,midterm2;		// Notlar için deðiþkenler
	
	printf("Enter midterm grade for first course:\n");	//Kullanýcýdan notlarýn istenmesi ve atanmasý
	scanf("%f",&midterm1);
	
	printf("Enter final grade for first course:\n");
	scanf("%f",&final1);
	
	printf("Enter midterm grade for second course:\n");
	scanf("%f",&midterm2);
	
	printf("Enter final grade for second course:\n");
	scanf("%f",&final2);
	
	printf("The grade point average for first course is %f\n",(midterm1+final1)/2);		//Ýlk ders için ortalama
	
	printf("The grade point average for second course is %f\n",(midterm2+final2)/2);	//Ýkinci ders için ortalama
	*/
	
	//Question 1.6
	/*
	float r;		//yarýçap için deðiþken
	
	printf("Enter the radius of circle\n");		//Kullanýcýdan yarýçapýn istenmesi ve deðiþkene atanmasý
	scanf("%f",&r);							
	
	printf("Premiter of circle is %f\n",2*M_PI*r);		//Çevrenin hesabý ve yazdýrýlmasý
	
	printf("Area of circle is %f\n",M_PI*r*r);			//Alanýn hesabý ve yazdýrýlmasý
	*/
	
	//Question 1.7
	/*
	float a,b;		//Ýstenecek sayýlar için deðiþkenlerin seçilmesi
	
	printf("Enter first number\n");		//Sayýlarýn istenmesi ve deðiþkenlere atanmasý
	scanf("%f",&a);
	
	printf("Enter second number\n");
	scanf("%f",&b);
	
	printf("The arithmetic mean of numbers is %.0f\n",round((a+b)/2));	//Aritmetik ve geometrik ortalamanýn hesaplanmasý ve yazdýrýlmasý
	
	printf("The geometric mean of numbers is %.0f\n",round(sqrt(a*b)));
	*/
	
return 0;
}
