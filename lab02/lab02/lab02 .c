#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* ZADANIE 1
int main() {
    int liczba, suma = 0, max, liczba_wejsc = 0;
    float srednia;

    printf("Podawaj liczby (wpisz liczbê mniejsza od 0, aby zakoñczyæ):\n");

    while (1) {
        printf("Podaj liczbê: ");
        scanf_s("%d", &liczba);

       
        if (liczba < 0) {
            break;
        }

    
        suma += liczba;

        
        liczba_wejsc++;

      
        if (liczba_wejsc == 1 || liczba > max) {
            max = liczba;
        }
    }

  
    if (liczba_wejsc > 0) {
        srednia = (float)suma / liczba_wejsc;
        printf("Suma wprowadzonych liczb: %d\n", suma);
        printf("Œrednia wprowadzonych liczb: %.2f\n", srednia);
        printf("Maksymalna wartoœæ: %d\n", max);
    }
    else {
        printf("Nie wprowadzono ¿adnej liczby.\n");
    }
   
   //zadanie 2

   int main(){
    int liczba;
    int dodatnie = 0, suma_dodatnie = 0;
    int ujemne = 0, suma_ujemne = 0;

    printf("Podaj 10 liczb:\n");

    for (int i = 0; i < 10; i++) {
        printf("Podaj liczbe %d: ", i + 1);
        scanf_s("%d", &liczba);

        if (liczba > 0) {
            dodatnie++;
            suma_dodatnie += liczba;
        }
        else if (liczba < 0) {
            ujemne++;
            suma_ujemne += liczba;
        }
    }

    printf("\nLiczby dodatnie:\n");
    printf("Ilosc: %d\n", dodatnie);
    printf("Suma: %d\n", suma_dodatnie);

    printf("\nLiczby ujemne:\n");
    printf("Ilosc: %d\n", ujemne);
    printf("Suma: %d\n", suma_ujemne);

    //zadanie 3

int main() {
    int n, suma_parzyste = 0;

    printf("Podaj liczbe elemontow ciagu (n > 0): ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Liczba elementow ciagu musi byæ wieksza od 0.\n");
        return 1;  
    }

    
    printf("Podaj %d liczb:\n", n);
    for (int i = 0; i < n; i++) {
        int liczba;
        printf("Podaj liczbe %d: ", i + 1);
        scanf_s("%d", &liczba);

        
        if (liczba % 2 == 0) {
            suma_parzyste += liczba;
        }
    }

    // Wyœwietlanie wyniku
    printf("Suma liczb parzystych w ciagu: %d\n", suma_parzyste);


//zadanie 4

int main() {
    int n, suma_parzyste = 0;

   
    srand(time(NULL));

    printf("Podaj liczbe elementow ciagu (n > 0): ");
    scanf("%d", &n);

   
    if (n <= 0) {
        printf("Liczba elementow ciagu musi byc wieksza od 0.\n");
        return 1;  
    }

    
    printf("Wylosowane liczby:\n");
    for (int i = 0; i < n; i++) {
        int liczba = (rand() % 56) - 10;  

        
        printf("%d ", liczba);

        
        if (liczba % 2 == 0) {
            suma_parzyste += liczba;
        }
    }


    printf("\nSuma liczb parzystych w ciagu: %d\n", suma_parzyste);



    //zadanie 5
int main() {
    int n, suma_punktow = 0, punkty, i = 0;
    float srednia;

    
    printf("Podaj liczbe studentow ");
    scanf_s("%d", &n);

    
    if (n <= 0) {
        printf("Liczba studentow musi byc wieksza od 0.\n");
        return 1; 
    }

  
    printf("Podaj punkty dla %d studentow:\n", n);
    while (i < n) {
        printf("Podaj punkty studenta %d: ", i + 1);
        scanf_s("%d", &punkty);

        
        suma_punktow += punkty;
        i++;
    }


    srednia = (float)suma_punktow / n;

    
    printf("Srednia liczba punktow w grupie: %.2f\n", srednia);



    //zadanie 6

    int main() {
    
    printf("Ciag 1: ");
    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Ciag 2: ");
    for (int i = 100; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");
 
    printf("Cig 3: ");
    for (int i = 7; i <= 77; i += 7) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Ciag 4: ");
    for (int i = 20; i >= 0; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");
 

 //zadanie 7
int main() {
    int i, j;

   
    for (i = 0; i < 10; i++) {
        for (j = 0; j <= 9 - i; j++) {
            printf("X");
        }
        printf("\n");
    }
    printf("\n");


    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = 0; j <= 9 - i; j++) {
            printf("X");
        }
        printf("\n");
    }
    printf("\n");

    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 9 - i; j++) {
            printf(" ");
        }
        for (j = 0; j <= 2 * i; j++) {
            printf("X");
        }
        printf("\n");
    }

    

    return 0;
}
 */


   

  

  

