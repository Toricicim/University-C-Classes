#include <stdlib.h>
#include <stdio.h>


/// Fonksiyonlar

void myFunctionIsim(char name[])
{
    printf("Merhaba %s\n", name);
}

void myFunctionYas(char isim[],int yas){
    printf("Merhaba %s. Yasin %d şeklindedir", isim, yas);
}

void myFunctionDilekce(char kurum[],double numara, char isim[], char soyad[])
{
    printf("%s Dekanligina\n",kurum);
    printf("Istatistik bolumunde %.0lf numarali ve %s %s ad soyadli ogrenciyim.\n",numara,isim,soyad);
    printf("Ogrenci belgesi talep etmekteyim.");
}

int carpma(int y, int z)
{
    return y*z;
}

float bolme(int k, int l); //en alt kısımda fonksiyonu bulabilirsiniz.



int main()
{
    myFunctionIsim("Emre");

    myFunctionYas("Emre",32);

    myFunctionDilekce("Fen Fak", 23041010028, "Ali Umut", "Altas\n\n");
    
    int carpim;
    carpim=carpma(4,6);
    printf("Ilsem sonucu %d seklindedir.\n\n", carpim);
    
    printf("Bolme isleminin sonucu %f seklindedir.",bolme(31,6));

    return 0;
}

float bolme(int k, int l){
    float sonuc;
    sonuc = (float)k/l;
    
    return sonuc;
}