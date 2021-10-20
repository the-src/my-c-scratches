#include <stdio.h>
#include <math.h>

void ucgenOrNot() {
    float a,b,c,P;
    printf("Input first number: ");
    scanf("%f",&a);
    printf("Input second number: ");
    scanf("%f",&b);
    printf("Input third number: ");
    scanf("%f",&c);
    if (abs(a-c) < b && b < a+c)
    {
        P = a + b + c;
        printf("\nPerimeter = %f", P);
    }
    else
    {
        printf("Ucgen olamaz!!");
    }
}