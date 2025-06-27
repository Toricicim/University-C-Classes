#include <stdlib.h>
#include <stdio.h>

int ciftMi(int sayi) {
    if (sayi % 2 == 0) {
        return 1; // Çift sayı
    } else {
        return 0; // Tek sayı
    }
}
long long faktoriyel(int n) {
    long long sonuc = 1;
    for (int i = 1; i <= n; i++) {
        sonuc *= i;
    }
    return sonuc;
}
int dizininToplami(int dizi[], int boyut) {
    int toplam = 0;
    for (int i = 0; i < boyut; i++) {
        toplam += dizi[i];
    }
    return toplam;
}
float ortalamaHesapla(int dizi[], int boyut) {
    int toplam = 0;
    for (int i = 0; i < boyut; i++) {
        toplam += dizi[i];
    }
    return (float)toplam / boyut;
}
void tekSayilariYazdir(int dizi[], int boyut) {
    printf("Dizinin tek sayilari:\n");
    for (int i = 0; i < boyut; i++) {
        if (dizi[i] % 2 != 0) { // Eğer sayı tekse
            printf("%d ", dizi[i]);
        }
    }
    printf("\n");
}
void matrisGir(int satir, int sutun, int matris[satir][sutun]) {
    printf("Matris elemanlarini girin:\n");
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("matris[%d][%d] = ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }
}
void sutunCarpimlariniHesapla(int satir, int sutun, int matris[satir][sutun]) {
    printf("\nSutun elemanlari carpimlari:\n");
    for (int j = 0; j < sutun; j++) {
        int carpim = 1;
        for (int i = 0; i < satir; i++) {
            carpim *= matris[i][j];
        }
        printf("Sutun %d carpimi: %d\n", j + 1, carpim);
    }
}
void enBuyukVeKucuk(int satir, int sutun, int matris[satir][sutun]) {
    int enBuyuk = matris[0][0];
    int enKucuk = matris[0][0];

    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            if (matris[i][j] > enBuyuk)
                enBuyuk = matris[i][j];
            if (matris[i][j] < enKucuk)
                enKucuk = matris[i][j];
        }
    }
    printf("\nMatrisin en buyuk elemani: %d\n", enBuyuk);
    printf("Matrisin en kucuk elemani: %d\n", enKucuk);
}

void matrisYazdir(int satir, int sutun, int matris[satir][sutun]) {
    printf("Sonuç matrisi:\n");
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
}

void matrisCarpimi(int satir1, int sutun1, int satir2, int sutun2, int matris1[satir1][sutun1], int matris2[satir2][sutun2], int sonuc[satir1][sutun2]) {
    for (int i = 0; i < satir1; i++) {
        for (int j = 0; j < sutun2; j++) {
            sonuc[i][j] = 0;
            for (int k = 0; k < sutun1; k++) {
                sonuc[i][j] += matris1[i][k] * matris2[k][j];
            }
        }
    }
}
void Siralama(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
double Medyan(int arr[], int n) {
    Siralama(arr, n);

    if (n % 2 != 0) {
        return arr[n / 2];
    } else {
        return (arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
    }
}
void RastgeleSayi(int adet, int min, int max);





int main(){
    int secim;
    printf("Yapmak istediginiz islemi seciniz:\n");
    
    printf("1:Bir sayının çift mi tek mi olduğunu kontrol eden program\n");
    printf("2:Bir sayının faktöriyelini hesaplayan program\n");
    printf("3:Bir dizinin tüm elemanlarının toplamını hesaplayan program\n");
    printf("4:Kullanıcıdan bir dizi alınacak ve dizinin elemanlarının ortalaması hesaplayan program\n");
    printf("5:Dizideki sadece tek sayıları bulan ve yazdıran program\n");
    printf("6:Kullanıcıdan alınan bir matrisin sütun elemanlarını çarpan program\n");
    printf("7:Fonksiyonlarla en büyük ve en küçük elemanı bulan program\n");
    printf("8:Kullanıcı tarafından girilen iki matrisin çarpımını hesaplayan program\n");
    printf("9:Kullanıcıdan alınan elemanlarını medyanını bulan program\n");
    printf("10:Kullanıcı tarafından girilen iki değer arasında istenilen adet kadar sayı üreten program\n");
    
    printf("Seciminiz:\n");
    scanf("%d", &secim);
    
    switch (secim){
        
        case 1:{
            int sayi;
            printf("Bir sayi girin: ");
            scanf("%d", &sayi);
    
            if (ciftMi(sayi)) {
            printf("%d bir cift sayidir.\n", sayi);
            } else {
            printf("%d bir tek sayidir.\n", sayi);
            }
        }
        
        case 2:{
            int sayi;
            printf("Bir sayi girin: ");
            scanf("%d", &sayi);
    
            printf("%d sayisinin faktoriyeli: %lld\n", sayi, faktoriyel(sayi));

        }
        
        case 3:{
            int boyut;
    
            printf("Dizinin boyutunu girin: ");
            scanf("%d", &boyut);
    
            int dizi[boyut];
    
            printf("%d elemanlı dizinin elemanlarını girin:\n", boyut);
            for (int i = 0; i < boyut; i++) {
                printf("dizi[%d]: ", i);
                scanf("%d", &dizi[i]);
            }
    
            int toplam = dizininToplami(dizi, boyut);
            printf("Dizinin elemanlarının toplamı: %d\n", toplam);
         }
         
        case 4:{
            int boyut;
    
            printf("Dizinin boyutunu girin:\n ");
            scanf("%d", &boyut);
    
            int dizi[boyut];
    
            printf("%d elemanlı dizinin elemanlarını girin:\n", boyut);
            for (int i = 0; i < boyut; i++) {
            printf("dizi[%d]: ", i);
            scanf("%d", &dizi[i]);
            }
    
            float ortalama = ortalamaHesapla(dizi, boyut);
            printf("Dizinin ortalaması: %.2f\n", ortalama);   
        }
        
        case 5:{
             int boyut;
    
            printf("Dizinin boyutunu girin: ");
            scanf("%d", &boyut);
    
            int dizi[boyut];
    
            printf("%d elemanlı dizinin elemanlarını girin:\n", boyut);
            for (int i = 0; i < boyut; i++) {
                printf("dizi[%d]: ", i);
                scanf("%d", &dizi[i]);
            }

            tekSayilariYazdir(dizi, boyut);
        }
        
        case 6:{
            int satir, sutun;

            printf("Matrisin satir ve sutun sayisini girin: ");
            scanf("%d %d", &satir, &sutun);

            int matris[satir][sutun];

            matrisGir(satir, sutun, matris);
            sutunCarpimlariniHesapla(satir, sutun, matris);
        }
        
        case 7:{
            int satir, sutun;

        printf("Matrisin satir ve sutun sayisini girin: ");
        scanf("%d %d", &satir, &sutun);

        int matris[satir][sutun];

        matrisGir(satir, sutun, matris);
        enBuyukVeKucuk(satir, sutun, matris);
        }
        
        case 8:{
            int satir1, sutun1, satir2, sutun2;

            printf("Birinci matrisin boyutlarını girin (satır ve sütun): ");
            scanf("%d %d", &satir1, &sutun1);

            printf("İkinci matrisin boyutlarını girin (satır ve sütun): ");
            scanf("%d %d", &satir2, &sutun2);
            if (sutun1 != satir2) {
                printf("Matris çarpımı yapılamaz! (Birinci matrisin sütun sayısı, ikinci matrisin satır sayısına eşit olmalı)\n");
                return 1;
            }
            int matris1[satir1][sutun1], matris2[satir2][sutun2], sonuc[satir1][sutun2];
            matrisGir(satir1, sutun1, matris1);
            matrisGir(satir2, sutun2, matris2);
            matrisCarpimi(satir1, sutun1, satir2, sutun2, matris1, matris2, sonuc);
            matrisYazdir(satir1, sutun2, sonuc);
        }
        case 9:{
            int n;

            printf("Dizi boyutunu girin: ");
            scanf("%d", &n);

            int arr[n];

            printf("Dizinin elemanlarını girin:\n");
            for (int i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
            }

            double median = Medyan(arr, n);
            printf("\nDizinin medyanı: %.2f\n", median);
        }
        case 10:{
            int min, max, adet;

            printf("Minimum degeri giriniz: ");
            scanf("%d", &min);

            printf("Maksimum degeri giriniz: ");
            scanf("%d", &max);

            printf("Kac adet rastgele sayi uretilecek? ");
            scanf("%d", &adet);

            if (min > max) {
                printf("Hata: Minimum değer maksimumdan büyük olamaz.\n");
                return 1;
            }

            if (adet <= 0) {
                printf("Hata: Uretilecek sayi adedi pozitif olmalidir.\n");
                return 1;
            }



            RastgeleSayi(adet, min, max);
        }
    }
    return 0;
}
void RastgeleSayi (int adet, int min, int max) {
    int i, sayi;

    for (i = 0; i < adet; i++) {
        sayi = rand() % (max - min + 1) + min;
        printf("%d ", sayi);
    }

}