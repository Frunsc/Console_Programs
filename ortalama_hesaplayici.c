#include <stdio.h>

int main()
{
    double ortalama = 0;
    double toplam = 0;
    double sayi_miktari = 0;
    double sayi = 0 ;
    int i;
    printf("kac tane sayinin ortalamasini hesaplamak istiyorsunuz?\n");
    printf("sayi miktari = ");

    scanf("%lf",&sayi_miktari);

    for( i=0; i<sayi_miktari; ++i)
    {
        printf("sayiyi giriniz; ");
        scanf("%lf",&sayi);
        toplam += sayi;

    }

    ortalama = toplam / sayi_miktari;
    printf("ortalama = %.3lf",ortalama);

    return 0;


}