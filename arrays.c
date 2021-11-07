#include <stdio.h>
int arrays() {
    int i = 8;
    int arr[] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
    while (i != -1) {
        printf("%d\n", arr[i]);
        i--;
    }
}