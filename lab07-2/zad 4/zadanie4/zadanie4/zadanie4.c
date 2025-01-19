#include <stdio.h>
#include "naglowek.h"


void przepiszTablice(struct punkt tab1[], struct punkt tab2[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        tab2[i] = tab1[i]; 
    }
}

int main() {
   
    struct punkt tab1[] = {
        {1.0, 2.0, 3.0},
        {4.0, 5.0, 6.0},
        {7.0, 8.0, 9.0}
    };

    struct punkt tab2[3];
    int rozmiar = sizeof(tab1) / sizeof(tab1[0]);

    
    przepiszTablice(tab1, tab2, rozmiar);

   
    printf("Zawartosc tablicy tab2:\n");
    for (int i = 0; i < rozmiar; i++) {
        printf("Punkt %d: (%.2f, %.2f, %.2f)\n", i + 1, tab2[i].x, tab2[i].y, tab2[i].z);
    }

    return 0;
}
