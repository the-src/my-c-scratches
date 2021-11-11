#include <stdio.h>
int array3d(){
    int i, j, k;
    const int x[1][2]; // constant array cannot change
    int a[2][2][3] = {1, 2, 3, 4, 5, a[2][2][3] = 5};
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            for(k = 0; k < 3; k++){
                printf("%d\t", a[i][j][k]);
            }
        }
    }
    return 0;
}