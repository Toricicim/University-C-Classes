#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int num;

    printf("Bir sayi giriniz:");
    scanf("%d", &num);

    switch (num%2)
    {
    case 0:
        printf("Girilen sayi çift sayidir");
        break;

    case 1:
        printf("Girilen sayi tek sayidir");
        break;
    }
    */
    /*
    //Girilen bir sayının negatif mi, pozitif mi ya da sıfır olup olmadığını kontrol eden program
    int num;
    printf("Bir sayi giriniz:\n");
    scanf("%d", &num);

    switch (num>0)
    {
    case 1: //True
        printf("Girilen sayi pozitiftir");
        break;

    case 0: //False
        switch (num ==0)
        {
        case 1:
            printf("Girilen sayi 0'dir.");
            break;

        case 0:
            printf("Girilen sayi negatiftir.");
            break;
        }
    }
    */

    /*
    char op;
    float num1, num2, sonuc;

    printf("Birinci sayi, [+,-,*,/], ikinci sayi"); //15+2, 15-2
    scanf("%f %c %f", &num1, &op, &num2);

    switch (op)
    {
        case '+':
            sonuc = num1 +num2;
            printf("Sonuc %.3f şeklindedir.", sonuc);
            break;

        case '-':
            sonuc = num1-num2;
            printf("Sonuc %.3f şeklindedir.", sonuc);
            break;

        case '*':
            sonuc = num1*num2;
            printf("Sonuc %.3f şeklindedir.", sonuc);
            break;
        case '/':
            sonuc = num1/num2;
            printf("Sonuc %.3f şeklindedir.", sonuc);
            break;
    }
    */
    /*
    int sayilar[] ={1,2,7,4,8};

     for (int i = 0; i < 5; i++)
     {
         printf("%d\n", sayilar[i]);
     }
     */

    /*
    //Kulanıcıdan alınan 6 adet sayıyı matrise yazdırıp toplamını hesaplayınız:

    float nums[6];
    float toplam=0;
    for (int i = 0; i < 6; i++)
    {
        printf("%d.Sayi giriniz:\n", i+1);
        scanf("%f", &nums[i]);
    }

    //Toplama kısmı:

    for (int i = 0; i < 6; i++)
    {
        toplam = toplam + nums[i];
    }

    printf("Toplamları:%f", toplam);
    */
    /*
        //Bitmemiş kod:
        int n;
        printf("Girilecek sayi adetini belirleyiniz:");
        scanf("%d", &n);

        int sayi[n], tek[n], cift[n];
        int j;
        int k;

        for (int i = 0; i < n; i++)
        {
            printf("%d. sayiyi giriniz:");
            scanf("%d", &sayi[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (sayi[1]%2 ==1 )
            {
                tek[]=sayi[];
                j = j+1;
            }
            else{
                cift[k]=sayi[i];
                k=k+1
            }
        }
        for (int i = 0; i < count; i++)
        {
            printf("%d", tek[i]);
        }
        printf("\n");

        for (int i = 0; i <k; i++)
        {
            printf("%d", cift[i]);
        }
        */

    
    int matris[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i <3; i++) //Satıra karşılık gelir
    {
        for (int j = 0; j < 3    ; j++)
        {
            printf("%d", matris[i][j]); //Sütüna karşılık gelir.
        }
        printf("\n");
    }
    
    // Kullanıcdan belirlediği matris boyutlarına göre matris değerlerini kullanıcıdan alan programı yazınız:
/*
    int n; // Satır sayısı
    int m; // Sütün sayısı

    printf("Satır ve sütün sayılarını giriniz\n");
    scanf("%d %d", &n, &m);

    int matris[n][m];
    printf("Veriyi giriniz.\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matris[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d", matris[i][j]);
        }
        printf("\n");
    }
*/
    return 0;
}