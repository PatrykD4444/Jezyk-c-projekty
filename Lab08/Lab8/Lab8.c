#include "zadanie1.h"
#include "zadanie2.h"
#include "zadanie3.h"
#include "zadanie4.h"
#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

int main(int argc, char* argv[]) {
    
   
    oblicz_pola_i_sortuj("promienie.txt", "wynik.txt");



    filtruj_cyfry("dane.txt", "wynik.txt");



    if (argc != 3) {
        fprintf(stderr, "Uzycie: %s <plik_wejsciowy> <plik_wyjsciowy>\n", argv[0]);
        return 1;
    }

    zlicz_znaki(argv[1], argv[2]);


    analiza_pesel("dane.txt", "wyniki6.txt");

    return 0;
}
