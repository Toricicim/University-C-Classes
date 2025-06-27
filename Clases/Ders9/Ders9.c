#include <stdio.h>
#include <stdlib.h>

// Matris elemanlarını kullanıcıdan alma
void matrisGir(int satir, int sutun, int matris[satir][sutun]) {
    printf("Matrisin elemanlarini giriniz:\n");
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("Matris[%d][%d] = ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }
}

// Matris yazdırma
void matrisYazdir(int satir, int sutun, int matris[satir][sutun]) {
    printf("\nMatris:\n");
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
}

// Her sütunun elemanlarının çarpımını hesaplama
void sutunCarpimi(int satir, int sutun, int matris[satir][sutun]) {
    printf("\nSütun elemanlarının çarpımı:\n");
    for (int j = 0; j < sutun; j++) {
        int carpim = 1;
        for (int i = 0; i < satir; i++) {
            carpim *= matris[i][j];
        }
        printf("Sütun %d çarpımı: %d\n", j + 1, carpim);
    }
}

// En küçük ve en büyük değeri bulma
void enKucukEnBuyuk(int satir, int sutun, int matris[satir][sutun]) {
    int enKucuk = matris[0][0];
    int enBuyuk = matris[0][0];

    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            if (matris[i][j] > enBuyuk) {
                enBuyuk = matris[i][j];
            }
            if (matris[i][j] < enKucuk) {
                enKucuk = matris[i][j];
            }
        }
    }

    printf("\nEn küçük değer: %d\n", enKucuk);
    printf("En büyük değer: %d\n", enBuyuk);
}

// İki matrisin çarpımını hesaplama
void matrisCarpimi(int satir1, int sutun1, int sutun2, 
                   int matris1[satir1][sutun1], int matris2[sutun1][sutun2], 
                   int sonuc[satir1][sutun2]) {

    for (int i = 0; i < satir1; i++) {
        for (int j = 0; j < sutun2; j++) {
            sonuc[i][j] = 0;
            for (int k = 0; k < sutun1; k++) {
                sonuc[i][j] += matris1[i][k] * matris2[k][j];
            }
        }
    }
}

// Diziyi büyükten küçüğe sıralama
void Siralama(int n, int dizi[n]) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (dizi[i] < dizi[j]) {
                int temp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp;
            }
        }
    }
}

// Medyan hesaplama
double Medyan(int n, int dizi[n]) {
    Siralama(n, dizi);
    if (n % 2 == 1) {
        return dizi[n / 2];
    } else {
        return (dizi[n / 2 - 1] + dizi[n / 2]) / 2.0;
    }
}

int main() {
    int secim;

    printf("Yapmak istediginiz islemi seciniz:\n");
    printf("1. Matris sütun çarpimi\n");
    printf("2. Matrisin en küçük ve en büyük elemani\n");
    printf("3. Iki matrisin carpimi\n");
    printf("4. Dizi medyani hesapla\n");
    printf("Seciminiz: ");
    scanf("%d", &secim);

    switch (secim) {
        case 1: {
            int satir, sutun;
            printf("Matrisin satir ve sutun sayisini giriniz: ");
            scanf("%d %d", &satir, &sutun);
            int matris[satir][sutun];
            matrisGir(satir, sutun, matris);
            matrisYazdir(satir, sutun, matris);
            sutunCarpimi(satir, sutun, matris);
            break;
        }
        case 2: {
            int satir, sutun;
            printf("Matrisin satir ve sutun sayisini giriniz: ");
            scanf("%d %d", &satir, &sutun);
            int matris[satir][sutun];
            matrisGir(satir, sutun, matris);
            matrisYazdir(satir, sutun, matris);
            enKucukEnBuyuk(satir, sutun, matris);
            break;
        }
        case 3: {
            int satir1, sutun1, satir2, sutun2;
            printf("Birinci matrisin satir ve sutun sayisini giriniz: ");
            scanf("%d %d", &satir1, &sutun1);
            printf("Ikinci matrisin satir ve sutun sayisini giriniz: ");
            scanf("%d %d", &satir2, &sutun2);

            if (sutun1 != satir2) {
                printf("Matris carpimi yapilamaz! (sutun1 != satir2)\n");
                return 1;
            }

            int matris1[satir1][sutun1];
            int matris2[satir2][sutun2];
            int sonuc[satir1][sutun2];

            printf("\nBirinci matris:\n");
            matrisGir(satir1, sutun1, matris1);
            printf("\nIkinci matris:\n");
            matrisGir(satir2, sutun2, matris2);

            matrisCarpimi(satir1, sutun1, sutun2, matris1, matris2, sonuc);
            printf("\nCarpim sonucu:\n");
            matrisYazdir(satir1, sutun2, sonuc);
            break;
        }
        case 4: {
            int n;
            printf("Dizinin eleman sayisini giriniz: ");
            scanf("%d", &n);
            int dizi[n];
            printf("Dizinin elemanlarini giriniz:\n");
            for (int i = 0; i < n; i++) {
                scanf("%d", &dizi[i]);
            }
            double medyan = Medyan(n, dizi);
            printf("Dizinin medyani: %.2lf\n", medyan);
            break;
        }
        default:
            printf("Gecersiz secim.\n");
    }

    return 0;
}
