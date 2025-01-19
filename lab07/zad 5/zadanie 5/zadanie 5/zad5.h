#ifndef NAGLOWEK_H
#define NAGLOWEK_H


struct element {
    int liczba;
    char napis[100];
};


void wpiszWartosci(struct element* tab, int rozmiar);
int sumaLiczb(struct element* tab, int rozmiar);

#endif 

