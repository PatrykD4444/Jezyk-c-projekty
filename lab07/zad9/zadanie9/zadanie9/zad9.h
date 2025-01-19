#ifndef NAGLOWEK_H
#define NAGLOWEK_H

struct figura {
    int rodzaj; 
    union {
        struct {
            double podstawa;
            double wysokosc;
        } trojkat, prostokat, rownoleglobok, trapez;
    };
};

double pole(struct figura f);

#endif

