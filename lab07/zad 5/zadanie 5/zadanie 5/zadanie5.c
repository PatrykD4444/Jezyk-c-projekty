#include <stdio.h>
#include <stdlib.h>
#include "zad5.h"


void wpiszWartosci(struct element* tab, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        printf("Podaj liczbe dla elementu %d: ", i + 1);
        scanf_s("%d", &tab[i].liczba);
        printf("Podaj napis dla elementu %d: ", i + 1);
        scanf_s("%s", tab[i].napis, sizeof(tab[i].napis));
    }
}


int sumaLiczb(struct element* tab, int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += tab[i].liczba;
    }
    return suma;
}

int main() {
    int rozmiar = 10;

 
    struct element tablicaStatyczna[rozmiar];


    struct element* tablicaDynamiczna = (struct element*)malloc(rozmiar * sizeof(struct element));
    if (tablicaDynamiczna == NULL) {
        printf("Blad alokacji pamieci!\n");
        return 1;
    }

   
    struct element* tablicaWskaznikowa[rozmiar];
    for (int i = 0; i < rozmiar; i++) {
        tablicaWskaznikowa[i] = (struct element*)malloc(sizeof(struct element));
        if (tablicaWskaznikowa[i] == NULL) {
            printf("Blad alokacji pamieci dla wskaünika!\n");
            return 1;
        }
    }


    printf("Wpisz dane dla statycznej tablicy:\n");
    wpiszWartosci(tablicaStatyczna, rozmiar);

    printf("\nWpisz dane dla dynamicznej tablicy:\n");
    wpiszWartosci(tablicaDynamiczna, rozmiar);

    printf("\nWpisz dane dla wskaünikowej tablicy:\n");
    for (int i = 0; i < rozmiar; i++) {
        printf("Podaj liczbe dla elementu %d: ", i + 1);
        scanf_s("%d", &tablicaWskaznikowa[i]->liczba);
        printf("Podaj napis dla elementu %d: ", i + 1);
        scanf_s("%s", tablicaWskaznikowa[i]->napis, sizeof(tablicaWskaznikowa[i]->napis));
    }

  
    printf("\nSuma liczb w statycznej tablicy: %d\n", sumaLiczb(tablicaStatyczna, rozmiar));
    printf("Suma liczb w dynamicznej tablicy: %d\n", sumaLiczb(tablicaDynamiczna, rozmiar));
    printf("Suma liczb w wskaünikowej tablicy: %d\n", sumaLiczb((struct element*)tablicaWskaznikowa, rozmiar));

   
    free(tablicaDynamiczna);
    for (int i = 0; i < rozmiar; i++) {
        free(tablicaWskaznikowa[i]);
    }

    return 0;
}
