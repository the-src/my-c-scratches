#include <stdio.h>

int main(){
    int armnumber, kactane = 0, q, sonuc = 0, cnt, mul = 1, rem;

    printf("Kontrol etmek istediğin sayıyı gir: ");
    scanf("%d",&armnumber);

    q = armnumber;
    while(q != 0)
    {
        q = q / 10;
        kactane++;
    }

    cnt = kactane;
    q = armnumber;

    while(q != 0)
    {
        rem = q % 10;
        while(cnt != 0)
        {
            mul = mul * rem;
            cnt--;
        }
        sonuc = sonuc + mul;
        cnt = kactane;
        q = q / 10;
        mul = 1;
    }
    if(sonuc == armnumber)
    {
        printf("Bu bir Armstrong sayıdır.");
    }
    else
    {
        printf("Maalesef, bizimle değilsun.");
    }
    return 0;
}
