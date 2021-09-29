#include <stdio.h>

int palindrom(){
    int sayi, q, sonuc = 0, rm;

    printf("Palindrom mu değil mi? ye hoşgeldiniz.\n\n");
    printf("Kontrol amaçlı sayıyı giriniz: ");
    scanf("%d",&sayi);

    q = sayi;

    while(q != 0)
    {
        rm = q % 10;
        sonuc = sonuc * 10 + rm;
        q = q / 10;

    }

    if(sonuc == sayi)
        printf("\nGüzell bu sayı bir palindrom");
    else
        printf("oo shit, no way!!");

    return 0;



}
