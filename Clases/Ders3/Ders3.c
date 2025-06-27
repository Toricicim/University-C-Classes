// Ders Ana Konular: For kullanımı, while kullanımı, sınav variable takibi sorusu
#include <stdlib.h>
#include <stdio.h>

int main()
{

    /*
    int i;

    for(i=1; i<=100; i=i+3)
    {
        printf("%d\n", i);
    }
    printf("%d", i);
    */

    /*
    int adet =0;
    int toplam=0;
    float mean;

    for (int i = 0; i <= 100; i=i+3)
    {
        printf("%d\n\n", i);
        toplam = toplam +i;
        adet = adet +1;
    }

    mean = (float) toplam / adet;

    printf("\n ayiların Toplamı: %d şeklindedir.\n\n", toplam);
    printf("Toplam %d kadar sayı bulunmaktadır.\n\n", adet);
    printf("Sayıların Otalaması: %.3f' dur.\n\n", mean);
    */

    // 9 'dan 100'e kadar 7 nin katlarını yazmak
    // 1. Yöntem mantıksal:
    /*
    int i;

    for( int i =14; i<=100; i=i+7)
    {
        printf("%d\n", i);
    }
    */

    // 2. yöntem if ile Biraz farklı :
    //  Deste böyle değildi ben böyle yaptım tekrar olsjun diye:
    
    int i= 0;
    int j;
    int sum= 0;
    int adet =0;
    float mean;

    printf("Girdiğiniz ilk sayı ve son sayı arasındaki sayıları bulma ve toplama:\n İlk Sayıyı Giriniz:\n");
    scanf("%d", &i);
    printf("Son Sayıyı giriniz:\n");
    scanf("%d", &j);

    for (i; i<=j; i++)
    {
        if (i%7 ==0 && i%3 ==0)
        {
            printf("%d\n", i);
            sum += i ;
            adet+=1;
        }
    
    }
    printf("Sayıların Toplamları: %d\n\n", sum);
    printf("Şu kadar sayı vardır: %d\n\n", adet);
    mean = (float) sum/adet;
    printf("Çıktı sayılarının ortalaması: %.3f\n\n", mean);
    

    /*
    //While kullanımı:
    int i=0;

    while (i<=10)
    {
        printf("%d\n", i);
        i = i+1;
    }
    */

    // Kullanıcıdan bir sayı alınız ve sayının karesini hesaplatıp ekrana yazınız. Eğer kullanıcı -1 girerse program dursun:
    /*
    int girdi;

    printf("Bir sayı giriniz karesi hesaplanacak:\n");
    scanf("%d", &girdi);
    while (girdi != -1)
    {
        int karesi = girdi * girdi;
        printf("Girilen %d sayısının karesi: %d\n",girdi, karesi);
        printf("Yeni bir sayı giriniz:\n");
        scanf("%d", &girdi);
    }
    */

    // do kullanımı:
    /*
    int sayac =1;

    do
    {
        printf ("%d\n", sayac);
        sayac = sayac + 1;
    } while (sayac<=0);
    */
    /*
    int secim;

    do
    {
        printf("Lütfen bir seçenek giriniz: 1. Toplama, 2. Çıkarma, 3. Çarpma, 4. Bölme, 5. Programdan Çık;");
        scanf("%d", &secim);
        int sayi1, sayi2;
        if (secim == 1)
        {
            printf("1. sayıyı giriniz:\n\n");
            scanf("%d", &sayi1);
            printf("2. sayıyı giriniz:\n\n");
            scanf("%d", &sayi2);
            int toplam = sayi1 + sayi2;
            printf("%d ile %d' nin toplamı: %d\n", sayi1, sayi2, toplam);
        }
        else if (secim == 2)
        {
            printf("1. sayıyı giriniz:\n\n");
            scanf("%d", &sayi1);
            printf("2. sayıyı giriniz:\n\n");
            scanf("%d", &sayi2);
            int toplam = sayi1 - sayi2;
            printf("%d ile %d' nin çıkarımı: %d\n", sayi1, sayi2, toplam);
        }
        else if (secim == 3)
        {
            printf("1. sayıyı giriniz:\n\n");
            scanf("%d", &sayi1);
            printf("2. sayıyı giriniz:\n\n");
            scanf("%d", &sayi2);
            int toplam = sayi1 * sayi2; 
            printf("%d ile %d' nin çarpımı: %d\n", sayi1, sayi2, toplam);
        }
        else if (secim == 4)
        {
            printf("1. sayıyı giriniz:\n\n");
            scanf("%d", &sayi1);
            printf("2. sayıyı giriniz:\n\n");
            scanf("%d", &sayi2);
            float toplam = sayi1 / sayi2;
            printf("%d ile %d' nin bölümü: %f\n", sayi1, sayi2, toplam);  
        }
    } while (secim != 5);

    // Derste continue ve break de işlendi lakin yazmadım.
    */
    return 0;
}