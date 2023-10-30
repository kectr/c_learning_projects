#include <stdio.h>
#include <math.h>

/*
Kemal Efe Çırakoğlu
23111012001
*/

int main(){
	
	//Question 1.1
	/*
	int number;		//Kullanıcıdan alınacak değer için değişken
	
	printf("Enter a number:\n");		//Kullanıcıya bilgilendirme
	scanf("%d",&number);				//KUllanıcıdan değer alınır ve number adlı değşkene yazılır
	
	printf("number = %d\n",number);			//Sayı yazdırılır
	printf("number/2 = %d\n",number/2);		//Sayının yarısı yazdırılır
	*/
	
	//Question 1.2
	
	
	int td_num,units,tens,hundreds;				//3 haneli sayı birler onlar ve yüzler basamağı için gerekli değişkenler tanımlanır
	
	printf("Enter a three-digit positive number\n");		//Kullanıcıdan 3 haneli sayı istenir
	scanf("%d",&td_num);			//td_num adlı değişkene 3 haneli sayı atılır
	
	if(100 <= td_num <1000){	//Sayının 3 haneli olup olmadığı kontrol edilir
	
		hundreds = td_num/100;	//Yüzler basamağı bulunur
		tens = (td_num/10)%10;	//Onlar basamağı bulunur
		units = td_num%10;		//Birler basamağı bulunur
		
		printf("Number is %d\n",td_num); //Sayı yazdırılır
		
		printf("Hundreds place: %d\nTens place: %d\nUnits place: %d\n",hundreds,tens,units);		//Sayının basamakları tek tek yazdırılır
		
		printf("Average of hundreds place and units place is: %.1f \n",(float)(units+hundreds)/2);	 	//Yüzler ve birler basamağının ortalaması alınıp yazdırılır
	}else{
		printf("Not 3 digit number or negative number for input!!!\n"); 		//Eğer sayı 3 basamaklı değil ya da negatifsa hata mesajı yazdırılır
	}
	
	
	//Question 1.3
	/*
	float angle;		// Açı için değişken
	
	printf("Enter exterior angle\n");	//Kullanıcıdan dış açı istenir
	scanf("%f",&angle);					//dış açı değeri angle adlı değişkene yazılır
	if(0<angle<=120){				//Açının uygunluğu (düzgün çokgenlerde dış açı maksimmum 120 derce olabilir) kontrol edilir
		if(fmod(360.0,angle) == 0){ //Açı 360 ı tam bölebiliyor mu diye kontrol edilir
			printf("Number of sides is %d\n",(int)(360.0/angle));  //Düzgün çokgenin kenar sayısı yazdırılır
		}else{
			printf("No regular polgon for given angle!!!\n"); //Eğer 360 ı tam bölmüyorsa hata mesajı yazdırılır
		}
		
	}else{
		printf("Angle cant be greater then 120 or less than 0!!!\n");  //Eğer açı uygun değilse hata mesajı yazdırılır
	}
	*/
	
	//Question 1.4
	/*
	float cost;		//Maliyet için değişken
	
	printf("Enter cost\n");		//KUllanıcıdan maliyet istenir
	scanf("%f",&cost);			//Maliyet cost adlı değişkene yazılır
	if (cost>=0){				//Maliyetin uygunluğu (positif) kontrol edilir
	
		printf("1st label price with %%8 KDV is %f\n",cost*1.08);  		//%8 ve %18 kdv li fiyatlar yazdırılır
		
		printf("2nd label price with %%18 KDV is %f\n",cost*1.18);
	}else{
		printf("Negative cost!!!\n");		//Negatif maliyet için hata mesajı
	}
	*/
	
	//Question 1.5
	/*
	float final1,final2,midterm1,midterm2;		// Notlar için değişkenler
	
	printf("Enter midterm grade for first course:\n");	//Kullanıcıdan notların istenmesi ve atanması
	scanf("%f",&midterm1);
	
	printf("Enter final grade for first course:\n");
	scanf("%f",&final1);
	
	printf("Enter midterm grade for second course:\n");
	scanf("%f",&midterm2);
	
	printf("Enter final grade for second course:\n");
	scanf("%f",&final2);
	
	printf("The grade point average for first course is %f\n",(midterm1+final1)/2);		//İlk ders için ortalama
	
	printf("The grade point average for second course is %f\n",(midterm2+final2)/2);	//İkinci ders için ortalama
	*/
	
	//Question 1.6
	/*
	float r;		//yarıçap için değişken
	
	printf("Enter the radius of circle\n");		//Kullanıcıdan yarıçapın istenmesi ve değişkene atanması
	scanf("%f",&r);							
	
	printf("Premiter of circle is %f\n",2*M_PI*r);		//Çevrenin hesabı ve yazdırılması
	
	printf("Area of circle is %f\n",M_PI*r*r);			//Alanın hesabı ve yazdırılması
	*/
	
	//Question 1.7
	/*
	float a,b;		//İstenecek sayılar için değişkenlerin seçilmesi
	
	printf("Enter first number\n");		//Sayıların istenmesi ve değişkenlere atanması
	scanf("%f",&a);
	
	printf("Enter second number\n");
	scanf("%f",&b);

    if((a*b)<0){
        printf("The multiplication of numbers cant be negative because of geometric mean!!!");
    }else
    {
        printf("The arithmetic mean of numbers is %.0f\n",round((a+b)/2));	//Aritmetik ve geometrik ortalamanın hesaplanması ve yazdırılması
	
	    printf("The geometric mean of numbers is %.0f\n",round(sqrt(a*b)));
    }
    */

return 0;
}