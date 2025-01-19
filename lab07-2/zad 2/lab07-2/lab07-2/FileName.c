#include <stdio.h>
#include<FileName.h>
struct trojkat {
    float a;
    float b;
    float c;
};

float obwod(struct trojkat t) {
    return t.a + t.b + t.c;
}

void przepiszTrojkat(struct trojkat troj1, struct trojkat* troj2) {
    troj2->a = troj1.a;
    troj2->b = troj1.b;
    troj2->c = troj1.c;
}

int main() {
    struct trojkat troj1 = { 3.0, 4.0, 5.0 };
    struct trojkat troj2;

    printf("Przed przepisaniem:\n");
    printf("troj1: a = %.2f, b = %.2f, c = %.2f\n", troj1.a, troj1.b, troj1.c);
    printf("troj2: a = %.2f, b = %.2f, c = %.2f\n", troj2.a, troj2.b, troj2.c);

    przepiszTrojkat(troj1, &troj2);

    printf("\nPo przepisaniu:\n");
    printf("troj1: a = %.2f, b = %.2f, c = %.2f\n", troj1.a, troj1.b, troj1.c);
    printf("troj2: a = %.2f, b = %.2f, c = %.2f\n", troj2.a, troj2.b, troj2.c);

    return 0;
}
