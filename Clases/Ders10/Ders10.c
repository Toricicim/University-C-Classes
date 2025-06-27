#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void rastgeleSayi(int adet,int min,int max){
    int sayi;

    for (int i = 0; i < adet; i++)
    {
        sayi = rand()%(max-min+1)+min;
        printf("%d\n",sayi);
    }
    
}


int main(){

    int secim;

    printf("Yapmak istediginiz islemi seciniz:\n");
    printf("\n1. Belirlenen aralikta istenilen kadar sayi uretme\n");
    printf("2. Kullanici tarafindan girilen sayilarin varyansi\n");
    printf("3 nxn'lik bir matrisin köşe eleman değerlerinin toplamini veren program\n");
    printf("Seciminiz:\n");
    scanf("%d", &secim);
    switch (secim)
    {
        case 1:{
            //Kullanıcı tarafından girilen iki deger arasinda istenilen sayida sayi uretme;
            int adet,min,max;
            
            printf("\nUretilecek sayi adeti:\n ");
            scanf("%d",&adet);

            printf("\nAlt siniri giriniz:\n ");
            scanf("%d",&min);

            printf("\nUst siniri giriniz:\n ");
            scanf("%d",&max);

            if (min>max)
            {
                printf("Yanlis giris yapildi.");
                return 1;
            }
            if (adet<=0)
            {
                printf("Yanlis giris yapildi");
                return 1;
            }
            
            srand(time(NULL));
            printf("\nSayilar:\n");
            rastgeleSayi(adet,min,max);
            

        }
        case 2:{
            //Kullanici tarafindan girilen n tane sayinin varyansini hesaplayan program:
            int n;

            printf("\nGirilecek sayi adeti:\n");
            scanf("%d",&n);

            if (n<=0)
            {
                printf("\nYanlis giris yapildi\n");
            }
            double dizi[n];
            double sayi, toplam = 0, ortalama,varyans = 0;

            for (int i = 0; i < n; i++)
            {
                scanf("%lf",&dizi[i]);
                toplam = toplam + dizi[i];
            }
            ortalama = toplam/ n;
            for (int i = 0; i < n; i++)
            {
                varyans = (varyans + pow(dizi[i]-ortalama,2))/n;
            }

            printf("\nOrtalama: %.2lf\n",ortalama);
            printf("Varyans: %.2lf\n",varyans);

            
            
        }
        case 3:{
            //nxn'lik bir matrisin köşe eleman değerlerinin toplamini veren program:
            int n = 0; 
            int toplam;

            printf("\nn degeri:");
            scanf("%d",&n);

            int matris[n][n];

            printf("\nMatrisin degerlerini giriniz:\n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("Matris[%d][%d]:",i,j);
                    scanf("%d",&matris[i][j]);
                }
                
            }
            toplam= matris[0][0]+ matris[0][n-1]+ matris[n-1][0]+ matris[n-1][n-1];
            printf("\n\nMatrisin kosegenlerinin toplami:\n%d",toplam);
        }
    }
    return 0;
}