#include <stdio.h>
#include <stdlib.h>


void matrisSecimi(int satir, int sutun, int matris[satir][sutun]){
    printf("\nLütfen birinci matrisin elemanlarini giriniz:\n");

    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("Matris[%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }

    
}
void matrisCaprimi(int satir, int sutun, int satir2, int sutun2, int matris[satir][sutun],int matris2[satir2][sutun2],int sonuc[satir][sutun2]){
    
    if (sutun!=satir2)
    {
        printf("Matris çarpimi yapilamaz.");
        return;

    }
    else
    {
        for (int i = 0; i < satir; i++)
        {
            for (int j = 0; j < sutun2; j++)
            {
                sonuc[i][j]=0;
                for (int k = 0; k < sutun; k++)
                {
                    sonuc[i][j]=sonuc[i][j] + matris[i][k]*matris2[k][j];
                }
            }
        }
    }
}
void matrisYaz(int satir, int sutun, int matris[satir][sutun]){
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
}


int main() {

    int satir, sutun;

    printf("Lütfen birinci matrisin sirasiyla satir ve sutun sayisini giriniz:\n");
    scanf("%d %d", &satir, &sutun);
    
    int matris[satir][sutun];
    matrisSecimi(satir, sutun, matris);
    printf("\nİlk matris:\n");
    matrisYaz(satir,sutun,matris);

    int satir2, sutun2;
    printf("Lütfen ikinci matrisin satir ve sutun sayisini giriniz ");
    scanf("%d %d",&satir2, &sutun2);

    int matris2[satir2][sutun2];
    matrisSecimi(satir2,sutun2,matris2);
    printf("\nİkinci matris:\n");
    matrisYaz(satir2,sutun2,matris2);

    int sonuc[satir][sutun2];
    matrisCaprimi(satir, sutun, satir2, sutun2,  matris,matris2,sonuc);
    printf("\nMatrisler carpimi:\n");
    matrisYaz(satir,sutun2,sonuc);
    return 0;
}