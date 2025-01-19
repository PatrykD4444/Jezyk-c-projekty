#include <stdio.h>
#include <stdlib.h>
#include "zad6.h"

void przepiszTablice(struct punkt10* tab1, struct punkt10* tab2, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        for (int j = 0; j < 10; j++) {
            tab2[i].wspolrzedne[j] = tab1[i].wspolrzedne[j];
        }
    }
}

int main() {
    int rozmiar = 3;

    struct punkt10 tablica1[rozmiar];
    struct punkt10 tablica2[rozmiar];

    for (int i = 0; i < rozmiar; i++) {
        printf("Podaj wspolrzedne punktu %d (10 wymiarów):\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("Wymiar %d: ", j + 1);
            scanf_s("%lf", &tablica1[i].wspolrzedne[j]);
        }
    }

    przepiszTablice(tablica1, tablica2, rozmiar);

    printf("\nTablica 1:\n");
    for (int i = 0; i < rozmiar; i++) {
        printf("Punkt %d: ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%lf ", tablica1[i].wspolrzedne[j]);
        }
        printf("\n");
    }

    printf("\nTablica 2 (po przepisaniu):\n");
    for (int i = 0; i < rozmiar; i++) {
        printf("Punkt %d: ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%lf ", tablica2[i].wspolrzedne[j]);
        }
        printf("\n");
    }

    return 0;
}
