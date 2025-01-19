#include <stdio.h>
 /*  //zadanie 1
long long silnia(int n) {
    
    if (n <= 1) {
        return 1;
    }
   
    return n * silnia(n - 1);
}

int main() {
    int n;

    
    printf("Podaj liczbe n: ");
    scanf_s("%d", &n);

   
    if (n < 0) {
        printf("Silnia jest zdefiniowana tylko dla liczb nieujemnych.\n");
    }
    else {
       
        printf("Silnia z %d wynosi %lld\n", n, silnia(n));
    }



    //zadanie 2
int ciag(int n) {
    
    if (n == 1) {
        return -1;
    }
    
    return -ciag(n - 1) * (n - 2);
}

int main() {
    int n;

    
    printf("Podaj liczbe n: ");
    scanf_s("%d", &n);

    
    if (n < 1) {
        printf("Podaj liczbê ca³kowit¹ wiêksz¹ lub równ¹ 1.\n");
    }
    else {
        
        printf("%d-ty wyraz ciagu wynosi: %d\n", n, ciag(n));
    }

    //zadanie 3

int NWD(int a, int b) {
    
    if (b == 0) {
        return a;
    }
   
    return NWD(b, a % b);
}

int main() {
    int a, b;

   
    printf("Podaj pierwsza liczbe a ");
    scanf_s("%d", &a);

    printf("Podaj druga liczbe b ");
    scanf_s("%d", &b);

    
    printf("Najwiekszy wspolny dzielnik (%d, %d)  %d\n", a, b, NWD(a, b));


    //zadanie 4
int wynik(int i) {
    
    if (i < 3) {
        return 1;
    }
    
    if (i % 2 == 0) {
        return wynik(i - 3) + wynik(i - 1) + 1;
    }
   
    return wynik(i - 1) % 7;
}

int main() {
    
    int i;

    
    for (i = 2; i <= 8; i++) {
        printf("wynik(%d) = %d\n", i, wynik(i));
    }



    //zadanie 5

void zamianaNaBinarny(int n) {
    if (n > 1) {
        zamianaNaBinarny(n / 2);  
    }
    printf("%d", n % 2);  
}

int main() {
    int liczba;

    
    printf("Podaj liczbe w systemie dziesietnym: ");
    scanf_s("%d", &liczba);

   
    printf("Liczba %d w systemie dwojkowym to: ", liczba);

    if (liczba == 0) {
        printf("0");  
    }
    else {
        zamianaNaBinarny(liczba);  
    }

    printf("\n");



    //zadanie 6

int fibonacci(int n) {
    if (n == 0) {
        return 0;  
    }
    if (n == 1) {
        return 1;  
    }
    return fibonacci(n - 1) + fibonacci(n - 2);  
}

int main() {
    int n;

    
    printf("Podaj numer wyrazu ciagu Fibonacciego: ");
    scanf_s("%d", &n);

    
    printf("F(%d) = %d\n", n, fibonacci(n));
 */

    //zadanie 7

void toBinary(int n) {
    if (n > 1) {
        toBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int liczba;

    printf("Podaj liczbe w systemie dziesietnym: ");
    scanf_s("%d", &liczba);

    printf("Liczba %d w systemie dwójkowym to: ", liczba);
    if (liczba == 0) {
        printf("0");
    }
    else {
        toBinary(liczba);
    }
    printf("\n");
   
    
    //zadanie 8
/*
int F(int x, int n) {
    if (n == 1) {
        return x;
    }
    else if (n % 3 == 0) {
        int k = F(x, n / 3);
        return k * k * k;
    }
    else {
        return x * F(x, n - 1);
    }
}

int main() {
    int x = 2;
    int n = 10;

    printf("Wynik F(%d, %d) = %d\n", x, n, F(x, n));
*/
    return 0;
}

    