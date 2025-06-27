#include <stdio.h>

int main() {
    double pi = 3.14159;
    double r, cevre, alan;

    printf("Cemberin yaricapini giriniz: ");
    scanf("%lf", &r);

    if (r < 0) {
        printf("Hata: Yarıçap negatif olamaz.\n");
        return 0;
    }

    cevre = 2 * pi * r;
    alan = pi* r * r;

    printf("Cemberin cevresi: %.2lf\n", cevre);
    printf("Cemberin alani: %.2lf\n", alan);

    return 0;
}