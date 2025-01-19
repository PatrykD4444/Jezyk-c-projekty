#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 //zadanie 1 , 2
/*
int main() {
    int tab[10];

    for (int i = 0; i < 10; i++) {
        tab[i] = (i + 1) * 3;

    }
    for (int i = 1; i < 10; i += 2) { 
        printf("%d ", tab[i]);
    }
    



    //zadanie 3
int main() {
    int n, a;

   
    printf("Podaj rozmiar : ");
    scanf_s("%d", &n);
    printf("Podaj a: ");
    scanf_s("%d", &a);

    int tab[n]; 

   
    for (int i = n - 1; i >= 0; i--) {
        tab[i] = a + (n - 1 - i) * 5;
    }

    printf("Tablica po wyp: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }


    //zadanie 4
int main() {
    int n;

    printf("Podaj rozmiar tablicy: ");
    scanf_s("%d", &n);

    
    if (tab == NULL) {
        printf("Blad przydzielania pamieci!\n");
        return 1;
    }
    
    srand((unsigned int)time(NULL));

   
    for (int i = 0; i < n; i++) {
        tab[i] = rand() % 74 - 23; 
    }

    
    printf("Wylosowane elementy tablicy:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    int min = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }

    printf("\nMinimalna wartosc w tablicy to: %d\n", min);


  


//zadanie 5

int main() {
    int n;


    printf("Podaj rozmiar tablicy: ");
    scanf_s("%d", &n);

    int tab[n];

    printf("Podaj pierwsza wartosc: ");
    scanf_s("%d", &tab[0]);
    printf("Podaj druga wartosc: ");
    scanf_s("%d", &tab[1]);

  
    for (int i = 2; i < n; i++) {
        tab[i] = tab[i - 1] + tab[i - 2];  
    }

  
    printf("Wartosci w tablicy:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }


    //zadanie 6,7

int main() {
    int tab[20];

   
    printf("Podaj pierwsza polowe :\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf_s("%d", &tab[i]);
    }

   
    for (int i = 0; i < 10; i++) {
        tab[10 + i] = tab[i];  
    }

 
    printf("Tablica po wypelnieniu :\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", tab[i]);
    }





    //zadanie 8
int main() {
    int n, m;

    
    printf("Podaj liczbe wierszy (n): ");
    scanf_s("%d", &n);
    printf("Podaj liczbe kolumn (m): ");
    scanf_s("%d", &m);

    
    int** macierz1 = (int**)malloc(n * sizeof(int*));
    int** macierz2 = (int**)malloc(n * sizeof(int*));
    int** wynik = (int**)malloc(n * sizeof(int*));

    
    if (macierz1 == NULL || macierz2 == NULL || wynik == NULL) {
        printf("B³¹d alokacji pamieci!\n");
        return 1;  

    
    for (int i = 0; i < n; i++) {
        macierz1[i] = (int*)malloc(m * sizeof(int));
        macierz2[i] = (int*)malloc(m * sizeof(int));
        wynik[i] = (int*)malloc(m * sizeof(int));

        if (macierz1[i] == NULL || macierz2[i] == NULL || wynik[i] == NULL) {
            printf("B³¹d alokacji pamieci dla wiersza %d!\n", i);
            return 1;
        }
    }

    
    printf("Podaj elementy pierwszej macierzy (%d x %d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("macierz1[%d][%d]: ", i + 1, j + 1);
            scanf_s("%d", &macierz1[i][j]);
        }
    }

    
    printf("Podaj elementy drugiej macierzy (%d x %d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("macierz2[%d][%d]: ", i + 1, j + 1);
            scanf_s("%d", &macierz2[i][j]);
        }
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            wynik[i][j] = macierz1[i][j] + macierz2[i][j];
        }
    }

   
    printf("Wynik dodawania macierzy:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", wynik[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < n; i++) {
        free(macierz1[i]);
        free(macierz2[i]);
        free(wynik[i]);
    }
    free(macierz1);
    free(macierz2);
    free(wynik);

    return 0;
}
*/

    
    


