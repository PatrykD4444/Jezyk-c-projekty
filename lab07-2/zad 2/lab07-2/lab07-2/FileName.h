#ifndef TROJKAT_H
#define TROJKAT_H

struct trojkat {
    float a;
    float b;
    float c;
};

float obwod(struct trojkat t);
void przepiszTrojkat(struct trojkat troj1, struct trojkat* troj2);

#endif
