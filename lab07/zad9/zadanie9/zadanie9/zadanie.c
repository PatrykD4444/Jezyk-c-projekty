#include <stdio.h>
#include "zad9.h"

double pole(struct figura f) {
    switch (f.rodzaj) {
    case 1:  
        return 0.5 * f.trojkat.podstawa * f.trojkat.wysokosc;
    case 2: 
        return f.prostokat.podstawa * f.prostokat.wysokosc;
    case 3:  
        return f.rownoleglobok.podstawa * f.rownoleglobok.wysokosc;
    case 4:  
        return 0.5 * (f.trapez.podstawa + f.trapez.wysokosc) * f.trapez.wysokosc;
    default:
        return 0;
    }
}

int main() {
    struct figura f;

    printf("Podaj rodzaj figury (1 - trojkat, 2 - prostokat, 3 - rownoleglobok, 4 - trapez): ");
    scanf_s("%d", &f.rodzaj);

    switch (f.rodzaj) {
    case 1:
        printf("Podaj podstawe i wysokosc trojkata:\n");
        printf("Podstawa: ");
        scanf_s("%lf", &f.trojkat.podstawa);
        printf("Wysokosc: ");
        scanf_s("%lf", &f.trojkat.wysokosc);
        break;
    case 2:
        printf("Podaj podstawe i wysokosc prostokata:\n");
        printf("Podstawa: ");
        scanf_s("%lf", &f.prostokat.podstawa);
        printf("Wysokosc: ");
        scanf_s("%lf", &f.prostokat.wysokosc);
        break;
    case 3:
        printf("Podaj podstawe i wysokosc rownolegloboku:\n");
        printf("Podstawa: ");
        scanf_s("%lf", &f.rownoleglobok.podstawa);
        printf("Wysokosc: ");
        scanf_s("%lf", &f.rownoleglobok.wysokosc);
        break;
    case 4:
        printf("Podaj podstawe i wysokosc trapezu:\n");
        printf("Podstawa: ");
        scanf_s("%lf", &f.trapez.podstawa);
        printf("Wysokosc: ");
        scanf_s("%lf", &f.trapez.wysokosc);
        break;
    default:
        printf("Nieprawidlowy rodzaj figury!\n");
        return 1;
    }

    double wynik = pole(f);
    printf("Pole figury: %.2lf\n", wynik);

    return 0;
}
