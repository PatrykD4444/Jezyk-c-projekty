#include <stdio.h>
#include "trojkat.h"



int main() {
    struct trojkat t;

    printf("Podaj dlugosc boku a: ");
    scanf_s("%f", &t.a);
    printf("Podaj dlugosc boku b: ");
    scanf_s("%f", &t.b);
    printf("Podaj dlugosc boku c: ");
    scanf_s("%f", &t.c);

    printf("Obwod trojkata: %.2f\n", obwod(t));

    return 0;
}
