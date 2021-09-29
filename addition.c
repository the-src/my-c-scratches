#include <stdio.h>

int addition(){
    int x, y;
    printf("SAYI 1: ");
    scanf("%d",&x);
    printf("SAYI 2: ");
    scanf("%d",&y);
    while(x != 0)
    {
        if(x < 0){
            y--;
            x++;
        } else{
            y++;
            x--;
        }

    }
    printf("Sayılarınızın toplamı %d",y);
}