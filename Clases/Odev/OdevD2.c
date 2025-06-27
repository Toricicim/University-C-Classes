#include <stdio.h>

int main()
{
    // Variable belirleyelim:
    int sayi;

    // while (1) kodu if {} etkinlesmez ve else{} etkinlesirse kodun basa sarmasını saglar.
    while (1)
    {
        printf("4 basamakli bir sayi girin: ");
        scanf("%d", &sayi);

        /*Girdigimiz sayinin basamaklarindaki rakamlarin toplamini
        bulmamiz için kullanmamiz gereken formul: */
        if (sayi >= 1000 && sayi <= 9999)
        {
            int sum = (sayi / 1000) + ((sayi / 100) % 10) + ((sayi / 10) % 10) + (sayi % 10);
            printf("Girdiğiniz sayinin basamaklarinin toplami: %d\n", sum);
            break; //Kod amacına ulastigi icin programin while(1) dongusunden cikması gerekiyor. 
                   //O yuzden break; kullanabiliriz.
        }
        // Sayi 4 basamakli değilse kullanıcak bölüm:
        else
        {
            printf("Lutfen sadece 4 basamakli bir sayi girin!\n");
        }
    }
    return 0;
}