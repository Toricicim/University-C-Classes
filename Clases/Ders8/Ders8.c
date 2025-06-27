#include <stdlib.h>
#include <stdio.h>


//Bir sayının çift mi yek mi olduğunu kontrol eden bir fonkiyon
/*
    int isEven (int sayi)
    {

        if(sayi%2==0){
            return 1; //çift sayı ise
        }
        else{
            return 0; //tek sayı ise
        }

    }
*/

//Bir sayının faktöriyelini hesaplayan bir fonksiyon
/*
long long faktoriyel (int n)
{
    long long sonuc =1;
    for (int i=1; i<=n; i++){
        sonuc = sonuc *i;
    }
    return sonuc; //void dışında kullanılan fonksiyonlarda birsey returlemek zorunludur.
}
*/

//Bir dizinin tamsayı elemanlarının toplamını hesaplayan bir fonksiyon
/*
int diziToplami(int dizi[],int boyut)
{
    int toplam = 0;
    for(int i=0; i <=boyut; i++){
        toplam = toplam + dizi[i];
    }
    return toplam;
}
*/

/*
int diziOrtalama(int dizi[],int boyut)
{
    int toplam = 0;
    for(int i=0; i <=boyut; i++){
        toplam = toplam + dizi[i];
    }
    return (float) toplam/boyut;
}
*/

void tekSayi(int dizi[],int boyut)
{
    printf("Dizinin tek sayiları\n");

    for (int i = 0; i <boyut; i++)
    {
        if (dizi[i]%2==1)
        {
            printf("%d",dizi[i]);
        }   
    }
    
}

    int main()
    {
        /*
        int sayi;
        printf("Lutfen bir sayi giriniz: ");
        scanf("%d",&sayi);

        if (isEven(sayi))
        {
            printf("Girilen %d bir çift sayidir", sayi);
        }
        else{
            printf("Girilen %d bir tek sayidir", sayi);
        }
        */
        /*
        int sayi;
        printf("Lütfen bir sayı giriniz:");
        scanf("%d", &sayi);

        printf("Girilen %d sayisinin faktoriyeli %lld şeklindedir", sayi, faktoriyel(sayi));
        */
       /*
        int boyut; 
        printf("Dizinin boyutunu giriniz:");
        scanf("%d",&boyut);

        int dizi[boyut];

        for(int i =0; i<boyut; i++)
        {
            printf("dizi[%d]:",i);
            scanf("%d", &dizi[i]);
        }
        int diziElemanToplam = diziToplami(dizi,boyut);
        printf("Dizinin elemenlari toplami %d şeklindedir.", diziElemanToplam );
        */

       /*
       int boyut; 
       printf("Dizinin boyutunu giriniz:");
       scanf("%d",&boyut);

       int dizi[boyut];

       for(int i =0; i<boyut; i++)
       {
           printf("dizi[%d]:",i);
           scanf("%d", &dizi[i]);
       }
       float diziElemanOrtalama = diziOrtalama(dizi,boyut);
       printf("Dizinin elemenlarinin ortalamasi:\n %f şeklindedir.", diziElemanOrtalama );
       */

       //Kullanıcı tarafından girilen bir dizide sadece tek sayilari  bulan ve yazdiran fonksiyon:

       
       return 0;
    }