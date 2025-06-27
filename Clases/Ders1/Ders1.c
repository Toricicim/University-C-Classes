
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // 1.Ders Başlangıç:
    // Detaylı bilgi Obsidian Format Specifier'da Bulunabilir.

    int x = 20, y = 30;
    float temp = 36.433, nem = 82.232;

    // Değişkenlerin kullanımları:

    printf("%d\n", x);
    printf("Tanimlanan s\nayi %d seklindedir. \n", x);

    printf("Tanimlanan x sayisi %d ve y sayisi %d şeklindedir.\n\n", x, y);
    printf("Sicaklik: %.2f nem orani: %.3f dir.\n\n", temp, nem);

    // scanf kodu bilgi alınmasını sağlar.

    /*
    int yas;
    float agirlik;

    printf("Yasinizi giriniz: ");
    scanf("%d", &yas);
    printf("Agirliginizi giriniz:");
    scanf("%f", &agirlik);
    printf("Yasiniz: %d Agirliginiz: %.2f\n\n", yas, agirlik);
    */

    // scanf ile hesaplama

    /*
    int z , t , u;
    printf("Toplama yapmak için ilk sayinizi giriniz");
    scanf("%d", &t);
    printf("Toplama yapmak için ikinci sayinizi giriniz");
    scanf("%d", &u);
    z= u+t;
    printf("Toplaminiz: %d", z);
    */

    // mat.h kullanımı:
    int a = 5, s = 2, b;
    b = pow(a, s);
    printf("Sayı: %d", b);

    return 0;
}