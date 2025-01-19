#include <stdio.h>
#include <math.h>
#include "naglowek.h"


float odleglosc(struct punkt p1, struct punkt p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}


float najmniejszaOdleglosc(struct punkt tab[], int rozmiar) {
    float minOdleglosc = odleglosc(tab[0], tab[1]);

    for (int i = 0; i < rozmiar - 1; i++) {
        for (int j = i + 1; j < rozmiar; j++) {
            float odlegloscPom = odleglosc(tab[i], tab[j]);
            if (odlegloscPom < minOdleglosc) {
                minOdleglosc = odlegloscPom;
            }
        }
    }

    return minOdleglosc;
}

int main() {
    
    struct punkt tab[] = {
        {1.0, 2.0, 3.0},
        {4.0, 5.0, 6.0},
        {7.0, 8.0, 9.0},
        {2.0, 3.0, 4.0}
    };

    int rozmiar = sizeof(tab) / sizeof(tab[0]);

    printf("Najmniejsza odleglosc pomiedzy punktami: %.2f\n", najmniejszaOdleglosc(tab, rozmiar));

    return 0;
}
