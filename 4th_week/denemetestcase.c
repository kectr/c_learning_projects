// recursive array find max

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int findMax(int arrp[],int lenp){
	if(lenp>=1){
		if(arrp[lenp]>=arrp[lenp-1]){
			arrp[lenp-1] = arrp[lenp];			
		}
		return findMax(arrp,lenp-1);
	}else{
		return arrp[lenp];
	}
	
}


int main() {
    // Test Case: 100 uzunlu�unda rastgele say�lardan olu�an dizi
    int arr[100];
    int i;
    int a=1;
    // Diziyi rastgele say�larla doldur
    srand(time(NULL));
    for (i = 0; i < 100; i++) {
        arr[i] = rand() % 1000;  // 0 ile 999 aras�nda rastgele say�lar
    }

    // Zaman �l��m� i�in ba�lang�� zaman�
    clock_t start_time = clock();

    // Uzun s�ren bir i�lem ekleyerek fonksiyonu �a��r
    int max = findMax(arr, 100);
    for (i = 0; i < 1000000; i++) {
        a *=2;
    }

    // Zaman �l��m� i�in biti� zaman�
    clock_t end_time = clock();

    // Sonucu ekrana yazd�r
    printf("Maksimum integer: %d\n", max);

    // Ge�en s�reyi hesapla ve ekrana yazd�r
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Ge�en s�re: %f saniye\n", elapsed_time);

    return 0;
}
