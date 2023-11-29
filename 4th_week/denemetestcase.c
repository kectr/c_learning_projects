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
    // Test Case: 100 uzunluðunda rastgele sayýlardan oluþan dizi
    int arr[100];
    int i;
    int a=1;
    // Diziyi rastgele sayýlarla doldur
    srand(time(NULL));
    for (i = 0; i < 100; i++) {
        arr[i] = rand() % 1000;  // 0 ile 999 arasýnda rastgele sayýlar
    }

    // Zaman ölçümü için baþlangýç zamaný
    clock_t start_time = clock();

    // Uzun süren bir iþlem ekleyerek fonksiyonu çaðýr
    int max = findMax(arr, 100);
    for (i = 0; i < 1000000; i++) {
        a *=2;
    }

    // Zaman ölçümü için bitiþ zamaný
    clock_t end_time = clock();

    // Sonucu ekrana yazdýr
    printf("Maksimum integer: %d\n", max);

    // Geçen süreyi hesapla ve ekrana yazdýr
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Geçen süre: %f saniye\n", elapsed_time);

    return 0;
}
