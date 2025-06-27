#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //**Sınav sorularına benzer sorular:**

    //Girilen bir tamsayı tek ise karesini alan 
    // çift ise sayının üçüncü kuvvetini alan program

    /*
    int sayi;
    printf("Lütfen girmek istediğiniz tam sayıyı giriniz.\n");
    scanf("%f", &sayi);
    if (sayi %2 ==1)
    {
        printf("Girdiğiniz sayının karesi:\n %f", sayi*sayi);
    }
    else{
        printf("Girdiğiniz sayının küpü: %f", sayi*sayi*sayi);
    }
    */
    
    //Faktoriyel hesabı
    //5!= 5*4*3*2*1
    //Hesaplanacak faktoriyel pozitif tamwsayı olup kullanıcıdan alınacaktır.
    
    
    int n;
    scanf("%f",&n);
    long long fact=1; //Sayı büyük olabileceği için.
    
    if (n<0)
    {
        printf("Girilen tamsayı negatif olduğundan faktoriyel hesaplanmaz");
    }
    else
    {
        for (int i = 1; i<=n ; i++)
        {
            fact= fact*i;
        }
        printf("Girilen %f sayısının faktoriyeli %llu şeklindedir.", n,fact);
        
    }
    

    //Kullanıcı tarafından girilen üç sayının en büyük olanını bulan program:
    /*
    float sayi1,sayi2,sayi3;

    printf("Birinci sayi:");
    scanf("%f",&sayi1);
    printf("İkinci sayi:");
    scanf("%f",&sayi2);
    printf("Üçüncü sayi:");
    scanf("%f",&sayi3);

    if (sayi1 > sayi2 && sayi1>sayi3)
    {
        printf("Girilen %f sayisi en büyük sayidir.",sayi1);
    }
    if (sayi2 > sayi1 && sayi2 >sayi3)
    {
        printf("Girilen %f sayisi en büyük sayidir.",sayi2);
    }
    if (sayi3 >sayi1 && sayi3 >sayi2)
    {
        printf("Girilen %f sayisi en büyük sayidir.",sayi3);
    }
    */
    /*
    //Girilen bir tamsayi pozitifse 1'den baslayarak girilen sayıya kadar olan sayıları yazdıran program.
    int sayi;
    printf("Pozitif bir tamsayı giriniz:");
    scanf("%d",&sayi);

    //Girilen sayı pozitifse program çalışsın:
    if (sayi>0)
    {
        int i=1;
        //1'den girilen sayıya kadar olan sayıları yazdırılması:
        while (i<=sayi)
        {
            printf("%d\n",i);
            i= i+1;
        }
    }
    else{
        printf("Lütfen pozitif bir tamsayı giriniz.");
    }
    */

    //Kendisi hariç bütün pozitif tamsayı çarpanlarının toplamı kendine eşit olan sayılara temel sayı denir.
    //Örneğin, 28 sayısının kendisi hariç pozitif çarpanları toplamı 1+2+4+7+14=28 olduğundan 
    //28 sayısı mükemmel bir tamsayıdır. Buna göre kullaanıcdan alınan bir pozitif tam sayının mükemmel
    //sayı olup olmadığını kontrol eden program:

    /* //Hatalı
    int sayi,i;
    int toplam=0;
    printf("Pozitif bir tam sayı giriniz:");
    scanf("%d",sayi);

    for (i=1; i < sayi; i++)
    {
        //Girilen tamsayının çarpımlarının bulunduğu kısım
        if(sayi%i==0){
            toplam + toplam +1;
        }   
    }
    if (toplam==sayi)
    {
        printf("Girilen %d sayisi mükemmel sayidir."sayi);
    }
    else
    {
        printf("Girilen %d sayisi mükemmel sayı değildir",sayi);
    }
    */

    //Programın çıktısı nedir ?
    /*
    int sayi=28, x=3;
    for (int i = 13; i >0; i--)
    {
        if (sayi%i==0)
            break;

            printf("%d\n",i);
            x=x+i;
        
        printf("%d\n",x);
        
    }
        */
    
    /*
    int i,j;
    int t=0;
    for (i = 1; i < 8; i+=2)
    {
        for ( j = 4; j >0 ; j-=2)
        {
            if (i>j)
            {
                t=t+i;
            }

        }
        
    }
    printf("%d",t);
    // i j t 
    // 1 4 0
    // 1 2 0
    // 3 4 0
    // 3 2 3
    // 5 4 8
    // 5 2 13
    */
}