// "main.c"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
#include "header.h"

// Hauptprogramm
int main() {

    // Index-Variable fuer die Suche mit Default-Wert
    int index = VALUE;

    // Benutzer zur Auswahl einer Option auffordern
    int choice;
    printf("Waehlen Sie eine Option zur Eingabe: 1. Ganzzahl oder 2. Buchstabe.\n");
    scanf("%d", &choice);

    // If-Block: Definition der Direktive & Befüllen des Arrays
    puts("Array wird generiert...");
    if (choice == 1) {
        #define INT_ARRAY
        fillArrayWithRandomNumbers(array);
    } else if  ( choice == 2) {
        #define CHAR_ARRAY
        fillArrayWithRandomLetters(array);
    } else {
        printf("Ungueltige Eingabe.\n");
        return 1; // Programm wird mit Fehler beendet
    }

    // Ausgabe des Arrays
    puts("Array ausgeben:");
    #ifndef DEBUG
        #define DEBUG
    #endif

    DEBUG;

    /*#ifdef DEBUG
        printArray();
    #endif*/

    // Präprozessordirektiven zur Deklaration von Variablen im Switch-Case-Block
    #ifdef INT_ARRAY
        int number;
        int* search_element = &number;
    #elif defined CHAR_ARRAY
        char letter;
        char* search_element = &letter;
    #endif

    // Switch-Case-Verschachtelung zur Benutzereingabe des zu suchenden Elements
    switch (choice) {

    case 1:
        #define INT_ARRAY
        // Benutzer zur Eingabe einer Zahl auffordern
        printf("Bitte geben Sie eine beliebige Zahl ein: \n");
        scanf("%d", search_element);
        printf("Sie haben die Zahl %d eingegeben.\n", *search_element);
        // Suche
        index = linear_search_int(*search_element, array);
        break;
    case 2:
        #define CHAR_ARRAY
        // Benutzer zur Eingabe eines Buchstabens auffordern
        printf("Bitte geben Sie einen beliebeigen Buchstaben ein: \n");
        scanf(" %c", search_element); // Leerzeichen vor %c, um Leerzeichen zu ueberspringen
        printf("Sie haben den Buchstaben %c eingegeben.\n", *search_element);
        // Suche
        index = linear_search_char(*search_element, array);
        break;
    default:
        printf("Ungueltige Eingabe.\n");
        return 1; // Programm wird mit Fehler beendet
    }

    // Ausgabe des Ergebnisses
    puts("Ergebnis der Suche");

    #define VALUE index // Redefinition

    if (VALUE == (-1)) {
        NO_SUCCESS
    } else {
        #ifdef INT_ARRAY
            INT_SUCCESS
        #elif defined CHAR_ARRAY
            CHAR_SUCCESS
        #endif
    }

    // Pointer freigeben
    free(search_element);

    return 0; // Programm ohne Fehler beendet
}
