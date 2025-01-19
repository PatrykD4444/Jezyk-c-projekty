#include <stdio.h>
#include <string.h>
/*
//zadanie 1
int main() {
    char tekst[100];
    printf("Podaj tekst: ");
    fgets(tekst, sizeof(tekst), stdin);

    tekst[strcspn(tekst, "\n")] = '\0';

    char kopiowany_tekst[100];
    strcpy_s(kopiowany_tekst, sizeof(kopiowany_tekst), tekst);

    char nowy_tekst[200];
    strcpy_s(nowy_tekst, sizeof(nowy_tekst), tekst);
    strcat_s(nowy_tekst, sizeof(nowy_tekst), " - Kopia: ");
    strcat_s(nowy_tekst, sizeof(nowy_tekst), kopiowany_tekst);

    printf("Dlugosc wprowadzonego tekstu: %zu\n", strlen(tekst));
    printf("Oryginalny tekst: %s\n", tekst);
    printf("Skopiowany tekst: %s\n", kopiowany_tekst);
    printf("Nowy tekst po polaczeniu: %s\n", nowy_tekst);

    //zadanie 2
int main() {
    
    printf("od 'a' do 'z':\n");
    for (char c = 'a'; c <= 'z'; c++) {
        printf("Znak: %c, Kod ASCII: %d\n", c, c);
    }

    
    printf("\nod 'A' do 'Z':\n");
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("Znak: %c, Kod ASCII: %d\n", c, c);
    }

    
    printf("\n od '0' do '9':\n");
    for (char c = '0'; c <= '9'; c++) {
        printf("Znak: %c, Kod ASCII: %d\n", c, c);
    }


    //zadanie 3
int main() {
    char inputText[1000];  
    int vowels = 0;        
    int consonants = 0;    

    
    printf("Wpisz tekst: ");
    fgets(inputText, sizeof(inputText), stdin);  

    
    for (int i = 0; inputText[i] != '\0'; i++) {
        char ch = tolower(inputText[i]);  

       
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        
        else if ((ch >= 'a' && ch <= 'z')) {
            consonants++;
        }
    }

   
    printf("Liczba samoglosek: %d\n", vowels);
    printf("Liczba spolglosk: %d\n", consonants);



    //zadanie 4

int main() {
    char inputText;  /
    int length = 0;

  
    printf("Wpisz tekst: ");
    fgets(inputText, sizeof(inputText), stdin);  

    while (inputText[length] != '\0' && inputText[length] != '\n') {
        length++;
    }

 
    printf("Tekst w odwrotnej kolejnosci i z zamienionymi literami: ");
    for (int i = length - 1; i >= 0; i--) {
       
        char ch = inputText[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = toupper(ch);
        }
        printf("%c", ch);
    }

    printf("\n");



//zadanie 5
void printDigitInWords(int digit) {
    switch (digit) {
    case 0: printf("zero "); break;
    case 1: printf("jeden "); break;
    case 2: printf("dwa "); break;
    case 3: printf("trzy "); break;
    case 4: printf("cztery "); break;
    case 5: printf("piec "); break;
    case 6: printf("szesc "); break;
    case 7: printf("siedem "); break;
    case 8: printf("osiem "); break;
    case 9: printf("dziewiec "); break;
    default: break;
    }
}

int main() {
    int number;

    
    printf("Wpisz dodatnia liczbe calkowita: ");
    scanf_s("%d", &number);

    
    if (number <= 0) {
        printf("Podana liczba nie jest dodatnia.\n");
        return 1;  
    }

    
    printf("Cyfry liczby %d to: ", number);

    
    int temp = number;
    int reverseDigits[10];
    int count = 0;

    
    while (temp > 0) {
        reverseDigits[count++] = temp % 10;
        temp /= 10;
    }

    
    for (int i = count - 1; i >= 0; i--) {
        printDigitInWords(reverseDigits[i]);
    }

    printf("\n");
    //zadanie 6
int main() {
    char s1[] = "abcdefghijklmnopqrstuvwxyz";  
    char s2[] = "zyxwvutsrqponmlkjihgfedcba"; 
    char inputText[MAX_LEN];  
    char encodedText[MAX_LEN];  

   
    printf("Podaj ciag znakow: ");
    fgets(inputText, sizeof(inputText), stdin);  

   
    inputText[strcspn(inputText, "\n")] = '\0';

   
    for (int i = 0; inputText[i] != '\0'; i++) {
        int flag = 0;  

      
        for (int j = 0; s1[j] != '\0'; j++) {
            if (inputText[i] == s1[j]) {  /1
                encodedText[i] = s2[j];  /
                flag = 1;  
                break;
            }
        }

        
        if (flag == 0) {
            encodedText[i] = inputText[i];
        }
    }

    
    printf("Zakodowany ciag: %s\n", encodedText);

    return 0;
}

*/

   

  