#include <stdio.h>
#include <math.h>

int prime(){
    int x, val1, i;
    printf("asal sayı düşündüğün şeyi gir: ");
    scanf("%d",&x);

    val1 = ceil(sqrt(x));

    int val2 = x, count = 0;
    for(i = 2; i <= val1; i++)
    {
        if(val2 % i == 0)
            count = 1;
    }
    if((count == 0 && val2 != 1) || val2 == 2)
    {
        printf("%d bir asal sayıdır.",x);
    }
    else
    {
        printf("%d asal değil.", x);
    }
}