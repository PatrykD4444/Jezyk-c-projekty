#include <stdio.h>
#include "zad8.h"

struct zespolone dodaj(struct zespolone z1, struct zespolone z2) {
    struct zespolone suma;
    suma.re = z1.re + z2.re;
    suma.im = z1.im + z2.im;
    return suma;
}

int main() {
    struct zespolone z1, z2, suma;

    printf("Podaj czesc rzeczywista i urojona pierwszej liczby zespolonej:\n");
    printf("Re: ");
    scanf_s("%lf", &z1.re);
    printf("Im: ");
    scanf_s("%lf", &z1.im);

    printf("Podaj czesc rzeczywista i urojona drugiej liczby zespolonej:\n");
    printf("Re: ");
    scanf_s("%lf", &z2.re);
    printf("Im: ");
    scanf_s("%lf", &z2.im);

    suma = dodaj(z1, z2);

    printf("\nSuma dwoch liczb zespolonych: %.2lf + %.2lfi\n", suma.re, suma.im);

    return 0;
}
