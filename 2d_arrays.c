#include <stdio.h>
int array2d(){
    int i, j;
    int a[2][3] = {1, 2, 3, 5};
    int b[2][3] = {{1,2,3},{4,5,6}};
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("%d\n", b[i][j]);
        }
    }
    return 0;
}