#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // 3x5 lik bir matrisin verisini kullanıcıdan alalım.
    // Daha sonra sütunlardaki elemanları toplatıp yazdıralım.

    
    int matris[3][5];

    // Kullanıcıdan veri alma
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("matris[%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }

    // Matrisi yazdır
    printf("Matris:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    // Sütun toplarını yazdır
    printf("Sütun Toplamları:\n");
    for (int j = 0; j < 5; j++)
    {
        int toplam = 0;
        for (int i = 0; i < 3; i++)
        {
            toplam += matris[i][j];
        }
        printf("Sütun %d+1 toplam: %d\n", j, toplam);
    }
        

    // eksik örnek

    // Rastgele sayı üretme
    // #include <time.h>

    /*
    srand(time(NULL));

    int random;

    //random = rand(); //Rastgele bir sayı
    //0 ile 99 arasında bir rastgele sayı verme:
    random = rand()%100;
    // ALT SINIR FALAN DA ÇALIŞILDI
    printf("Rastgele sayi: %d", random);
    */

    // Bir zar 10 kez atılıyor. zarın üst yüzeyine gelen sayıları yazdıralım.

    /*
    int tekrar = 10;
    int zar[tekrar];

    srand(time(NULL));

    for (int i = 0; i < tekrar; i++)
    {
        zar[i] = 1 + rand() % 6;
    }
    for (int i = 0; i < tekrar; i++)
    {
        printf("%d. zar: %d\n", i + 1, zar[i]);
    }
    // gelen zarların ortalamasınnı alınız:

    int toplam = 0;
    float ortalama;

    for (int i = 0; i < tekrar; i++)
    {
        toplam += zar[i];
    }

    ortalama = (float)toplam / tekrar;

    printf("\nGelen zarların toplam değer %d şeklindedir.\n", toplam);
    printf("Gelen zarların ortalaması %.3f şeklindedir", ortalama);
    */

    return 0;
}