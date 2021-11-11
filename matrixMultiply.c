#include <stdio.h>
#define MAX 50
int multiple(){
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int ra, ca, i, j, k, rb, cb, sum = 0;

    printf("Satır ve sütun sayısı giriniz a: ");
    scanf("%d %d", &ra, &ca);

    printf("\nMatris elemanlarını giriniz: ");
    for(i = 0; i < ra; i++){
        for(j = 0; j < ca; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Satır ve sütun sayısı giriniz b: ");
    scanf("%d %d", &rb, &cb);

    if (rb != ca)
        printf("Çarpamayız bunları.");
    else
        printf("\nMatris elemanlarını giriniz: ");
        for(i = 0; i < rb; i++) {
            for (j = 0; j < cb; j++) {
                scanf("%d", &b[i][j]);
            }
        }

    for(i = 0; i < ra; i++){
        for(j = 0; j < cb; j++){
           for(k = 0; k < rb; k++){
               sum += a[i][k] * b[k][j];
           }
           product[i][j] = sum;
           sum = 0;
        }
    }

    printf("Sonuç:\n");
    for(i = 0; i < ra; i++){
        for(j = 0; j < cb; j++){
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}