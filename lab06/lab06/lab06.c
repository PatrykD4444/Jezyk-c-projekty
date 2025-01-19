
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* //zadanie 1
int main() {
    int a, b, c;
    int* ptr_a = &a, * ptr_b = &b, * ptr_c = &c;

   
    printf("Adres zmiennej a: %p\n", (void*)&a);

    
    printf("Podaj wartosc zmiennej a: ");
    scanf_s("%d", &a);
    printf("Adres zmiennej a: %p, Wartosc zmiennej a: %d\n", (void*)&a, a);

    
    printf("Podaj wartosc zmiennej b: ");
    scanf_s("%d", &b);

    int roznica = *ptr_a - *ptr_b;
    printf("Roznica dwoch liczb: %d\n", roznica);


    printf("Podaj wartosc zmiennej c: ");
    scanf_s("%d", &c);

    
    float srednia = (*ptr_a + *ptr_b + *ptr_c) / 3.0;
    printf("Srednia trzech liczb: %.2f\n", srednia);


    //zadanie 2
int main() {
    int a[10];
    int n, min, max;

    printf("Adres pierwszego elementu tablicy: %p\n", (void*)&a[0]);
    printf("Adres czwartego elementu tablicy: %p\n", (void*)&a[3]);

    printf("Podaj minimalna wartosc: ");
    scanf_s("%d", &min);
    printf("Podaj maksymalna wartosc: ");
    scanf_s("%d", &max);

    srand(time(NULL));

    for (n = 0; n < 10; n++) {
        a[n] = rand() % (max - min + 1) + min;
        printf("Wartosc: %d, Adres: %p\n", a[n], (void*)&a[n]);
    }



//zadanie 3
int main() {
    int a[10];
    int n;
    float suma = 0, srednia;

    printf("Wpisz 10 elementow tablicy:\n");
    for (n = 0; n < 10; n++) {
        scanf_s("%d", &a[n]);
        suma += a[n];
    }

    srednia = suma / 10;

    printf("Srednia: %.2f\n", srednia);
    printf("Elementy wieksze od sredniej:\n");

    for (n = 0; n < 10; n++) {
        if (a[n] > srednia) {
            printf("%d\n", a[n]);
        }
    }


    //zadanie 4
void podniesDoKwadratu(int* liczba) {
    *liczba = (*liczba) * (*liczba);
}

int main() {
    int a;

    printf("Podaj liczbe: ");
    scanf_s("%d", &a);

    podniesDoKwadratu(&a);

    printf("Liczba podniesiona do kwadratu: %d\n", a);


//zadanie 5

int* potega(int* liczba, int* wykladnik) {
    static int wynik;
    wynik = 1;

    for (int i = 0; i < *wykladnik; i++) {
        wynik *= *liczba;
    }

    return &wynik;
}

int main() {
    int a, n;

    printf("Podaj liczbe: ");
    scanf_s("%d", &a);
    printf("Podaj wykladnik: ");
    scanf_s("%d", &n);

    int* wynik = potega(&a, &n);

    printf("Wynik: %d\n", *wynik);


//zadanie 6

#include <stdio.h>

void wypiszZnak(char* znak, int* ile) {
    for (int i = 0; i < *ile; i++) {
        printf("%c", *znak);
    }
    (*ile)--;
}

int main() {
    char znak;
    int ile;

    printf("Podaj znak: ");
    scanf_s("%c", &znak);
    getchar();  

    printf("Podaj ile razy ma zostaæ wypisany znak: ");
    scanf_s("%d", &ile);

    wypiszZnak(&znak, &ile);
    printf("\nPozostalo powtorzen: %d\n", ile);


//zadanie 7 



int mniejszaLiczba(int* a, int* b) {
    return (*a < *b) ? *a : *b;
}

int* mniejszaLiczbaPtr(int* a, int* b) {
    static int wynik;
    wynik = (*a < *b) ? *a : *b;
    return &wynik;
}

int main() {
    int x, y;

    printf("Podaj pierwsza liczbe: ");
    scanf_s("%d", &x);
    printf("Podaj druga liczbe: ");
    scanf_s("%d", &y);

    printf("Mniejsza liczba: %d\n", mniejszaLiczba(&x, &y));
    printf("Mniejsza liczba (wskaŸnik): %d\n", *mniejszaLiczbaPtr(&x, &y));

//zadanie 8

void zamienWartosci(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Podaj pierwsza liczbe: ");
    scanf_s("%d", &x);
    printf("Podaj druga liczbe: ");
    scanf_s("%d", &y);

    printf("Przed zamiana: x = %d, y = %d\n", x, y);

    zamienWartosci(&x, &y);

    printf("Po zamianie: x = %d, y = %d\n", x, y);

    return 0;
}

  */
    

   
  