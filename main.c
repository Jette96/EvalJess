// "main.c"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
#include "function.h"


// Hauptprogramm
int main() {

    // Index-Variable fuer die Suche mit Default-Wert
    int index = VALUE;

    // Generieren des Arrays
    puts("Array wird generiert...");
    #if CHOICE == 1
    int
    #elif CHOICE == 2
    char
    #endif
        array[SIZE];

    // Befuellen des Arrays
    puts("Array wird befuellt...");
    #if CHOICE == 1
        fillArrayWithRandomNumbers(array);
    #elif CHOICE == 2
        fillArrayWithRandomLetters(array);
    #endif

    // Ausgabe des Arrays
    puts("Array ausgeben:");
    #ifndef DEBUG
        #define DEBUG
    #endif

    #ifdef INT_ARRAY
        printArray(array);
    #elif defined CHAR_ARRAY
        printArray(array);
    #endif

    // Praeprozessordirektiven zur Deklaration von Variablen im Switch-Case-Block
    #ifdef INT_ARRAY
        int number = VALUE; // VALUE als Default-Wert
        int* search_element = &number;
    #elif defined CHAR_ARRAY
        char letter = VALUE; // VALUE als Default-Wert
        char* search_element = &letter;
    #endif

    // Switch-Case-Verschachtelung zur Benutzereingabe des zu suchenden Elements
    switch (CHOICE) {

    case 1:
        // Benutzer zur Eingabe einer Zahl auffordern
        printf("Bitte geben Sie eine beliebige Zahl ein: \n");
        scanf("%d", search_element);
        printf("Sie haben die Zahl %d eingegeben.\n", *search_element);
        // Suche
        index = linear_search_int(search_element, array);
        break;
    case 2:
        // Benutzer zur Eingabe eines Buchstabens auffordern
        printf("Bitte geben Sie einen beliebigen Buchstaben ein: \n");
        scanf(" %c", search_element); // Leerzeichen vor %c, um Leerzeichen zu ueberspringen
        printf("Sie haben den Buchstaben %c eingegeben.\n", *search_element);
        // Suche
        index = linear_search_char(search_element, array);
        break;
    default:
        printf("Ungueltige Option.\n");
    }

    // Ausgabe des Ergebnisses mitPraeprozessorcode
    puts("Ergebnis der Suche");

    #define VALUE index // Redefinition

    if(VALUE < 0) {
        NO_SUCCESS;
    } else if (VALUE >= 0) {
        #ifdef INT_ARRAY
            INT_SUCCESS;
        #elif defined CHAR_ARRAY
            CHAR_SUCCESS;
        #endif
    }

    //Pointer leeren
    search_element = NULL;

    return 0; // Programm ohne Fehler beendet
}
