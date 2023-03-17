#include <stdio.h>

int main()
{
    char isim[100];
    char soy[100];
    int no;
    float ort;

    printf("Adinizi Giriniz:");
    scanf("%s", isim);
    printf("Soyadinizi Giriniz:");
    scanf("%s", soy);
    printf("Ogrenci Numaranizi Girin:");
    scanf("%d", &no);
    printf("Ortalamanizi Girin:");
    scanf("%f", &ort);
    printf("*********************************");
    printf("\nAdi:%s\nSoyadi:%s\nNumarasi:%d\nOrtalamasi:%.1f" ,isim,soy,no,ort);
    printf("\n*********************************");
    

    return 0;
}