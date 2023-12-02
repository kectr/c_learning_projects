#include <stdio.h>
#include <string.h>

#define derslimit 20
#define dersadilimit 20
#define ogrencisinir 20

struct ogrenci {
    const char adsoyad[50];
    const char tcno[11];
    const char numara[11];
    char fakulte[50];
    char bolum[50];
    char sinif[50];
    char dersler[derslimit][dersadilimit];
    int dersadedi;
    double dersnotlari[derslimit];
    double ortalama;
};

void ortalamahesapla(struct ogrenci *ogr) {
    int i;
    double sum = 0;
    for (i = 0; i < ogr->dersadedi; i++) {
        sum += ogr->dersnotlari[i];
    }
    ogr->ortalama = sum / ogr->dersadedi;
}

void ogrenci_kayit(struct ogrenci *ogr) {
    printf("Kayit ekranina hosgeldiniz!!\n\n");

    printf("Lutfen ogrencinin adini soyadini girin: ");
    scanf(" %49[^\n]", ogr->adsoyad);

    printf("Lutfen ogrencinin tcsini girin: ");
    scanf(" %10s", ogr->tcno);

    printf("Lutfen ogrencinin numarasini girin: ");
    scanf(" %10s", ogr->numara);

    printf("Lutfen ogrencinin fakultesini girin: ");
    scanf(" %49[^\n]", ogr->fakulte);

    printf("Lutfen ogrencinin bolumunu girin: ");
    scanf(" %49[^\n]", ogr->bolum);

    printf("Lutfen ogrencinin sinifini girin: ");
    scanf(" %49[^\n]", ogr->sinif);

    printf("Eger ders girmek istiyorsaniz lutfen dersin adini en fazla %d olacak sekilde girin\n", dersadilimit);
    printf("Eger istemiyorsaniz 0 girebilirsiniz\n");

    int i, sayac = 0;
    char input[derslimit][dersadilimit];
    for (i = 0; i < derslimit; i++) {
        printf("%d ders hakkiniz var\n", derslimit - i);
        printf("Ders adi girin : ");
        scanf(" %19s", input[i]);
        getchar();
        if (strcmp(input[i], "0") == 0) {
            printf("0 girdiniz\n");
            break;
        }
        if (strlen(input[i]) < dersadilimit) {
            strcpy(ogr->dersler[i], input[i]);
            sayac++;
        } else {
            printf("Ders adi %d karakterden uzun, gecersiz!\n", dersadilimit);
        }
    }
    ogr->dersadedi = sayac;

    for (i = 0; i < ogr->dersadedi; i++) {
        printf("%s adli dersin notunu girin: ", ogr->dersler[i]);
        scanf("%lf", &ogr->dersnotlari[i]);
    }
    printf("Ortalama hesaplaniyor\n");

    ortalamahesapla(ogr);

    printf("Kayit basarili, tesekkurler!\n");
    printf("-------------------------\n");
}

void printogrenci(struct ogrenci *ogr) {
    int i;
    printf("Ad-Soyad : %s\n", ogr->adsoyad);
    printf("Tc : %s\n", ogr->tcno);
    printf("Numara : %s\n", ogr->numara);
    printf("Fakulte : %s\n", ogr->fakulte);
    printf("Bolum : %s\n", ogr->bolum);
    printf("Sinif : %s\n", ogr->sinif);
    printf("Ders adedi : %d\n", ogr->dersadedi);

    for (i = 0; i < ogr->dersadedi; i++) {
        printf("%s adli dersin notu : %lf \n", ogr->dersler[i], ogr->dersnotlari[i]);
    }
    printf("Ortalama %lf \n", ogr->ortalama);

    printf("-------------------------\n");
}

int main() {
    // Testing struct build and functions
    char input;
    int sayac = 0, i;
    struct ogrenci ogr[ogrencisinir];

    while (1) {
        printf("Lutfen yapmak istediginiz islemi secin \n");
        printf("1 - kayit\n");
        printf("2 - ogrenci listesi\n");
        scanf(" %c", &input);

        printf("-------------------------\n");

        if (input == '1' ) {
        	if(ogrencisinir - sayac == 0){
        		printf("Ogrenci siniri doldu!! \n");
        		continue;
			}else{
				ogrenci_kayit(&ogr[sayac]);
            	sayac++;
			}
        } else if (input == '2') {
            if (sayac == 0) {
                printf("Hicbir ogrenci yok, lutfen giris yapin\n");
            } else {
                for (i = 0; i < sayac; i++) {
                	printf("%d",i);
                    printogrenci(&ogr[i]);
                }
            }
        } else {
            printf("Yanlis girdi, bir daha islem secmelisiniz\n");
        }
    }

    return 0;
}

