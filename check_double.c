#include <stdio.h>

int check_double() {
    //This program shows you if you entered a number repeatedly.
    int rem, N;
    int seen[10] = {0};
    printf("Give me input>> ");
    scanf("%d ", &N);
    while(N > 0){
        rem = N%10;
        if(seen[rem] == 1)
            break;
        seen[rem] = 1;
        N = N / 10;
    }
    // If you enter 656, it will say yes. Because you entered "6" two times.
    if (N > 0)
        printf(" %s", "Yes.");
    else
        printf(" %s", "No.");
    return 0;
}
