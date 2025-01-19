#ifndef NAGLOWEK_H
#define NAGLOWEK_H


struct punkt {
    float x;
    float y;
    float z;
};


float odleglosc(struct punkt p1, struct punkt p2);
float najmniejszaOdleglosc(struct punkt tab[], int rozmiar);

#endif 

