//"main.c"
#include <stdio.h>
#include <stdlib.h>
//#include "function.h"
//#include "makro.h"

// einfache Hilfsvariablen und Symbole
#define VALUE -1
#define SEARCH_ELEMENT ptr
#define NO_SUCCESS printf("Der gesuchte Wert ist nicht im Array.");

//Array Eigenschaften festlegen
#define ARRAY_SIZE 10

#ifdef INT_ARRAY 
    int
#else 
    #define CHAR_ARRAY
    char
#endif 
    array[ARRAY_SIZE];

// Ausgabe des Arrays
#ifdef DEBUG \
    for(int i = 0; i < ARRAY_SIZE; i++) { \
        printf("%d ", array[i]); \
        } 
#endif

// Funktionskopf der linearen Suche formatieren, je nach Typ des Arrays
#define ARRAY_SEARCH

#ifdef INT_ARRAY
    #define ARRAY_SEARCH INT_ARRAY
#else 
    #define ARRAY_SEARCH CHAR_ARRAY
#endif

#define FUNC_LINEAR_SEARCH int linear_search(char *search_element, ARRAY_SEARCH) {

//Array mit Random Zahlen füllen
#ifdef CHAR_ARRAY 

    void fillArrayWithRandomLetters(CHAR_ARRAY) { // char array[]
        for (int i = 0; i < ARRAY_SIZE; i++) {
            array[i] = 'A' + (rand() % 26); // Zufallsbuchstaben zwischen 'A' und 'Z'
        }
        array[ARRAY_SIZE] = '\0'; // Null-terminierte Zeichenkette
    }

#endif 

#ifdef INT_ARRAY

    void fillArrayWithRandomNumbers(INT_ARRAY) { // int array[]
        for (int i = 0; i < ARRAY_SIZE; i++) {
            array[i] = rand() % 51; // Zufallszahlen zwischen 0 und 50
            }
    }

#endif

//Such-Algorithmus
    int linear_search(char *search_element, ARRAY_SEARCH) {

        int index = -1; // -1, wenn nicht gefunden
        
        //Jedes Element von vorne beginnend wird angeschaut
        for (int i = 0; i < ARRAY_SIZE; i++)
        {
            if(array[i] == search_element) {
                index = i;
                break;
            }
        }

        return index;
    }

//Main-Methode
int main() {
    
    // Benutzer zur Auswahl einer Option auffordern
    int choice;
    printf("Waehlen Sie eine Option zur Eingabe: 1. Ganzzahl oder 2. Buchstabe.\n");
    scanf("%d", &choice);

    // Switch-Anweisung zur Behandlung der Auswahl
    switch (choice) {
        case 1:
            #define INT_ARRAY
            // Benutzer zur Eingabe einer Zahl auffordern
            int number;
            int *ptr = number;
            printf("Bitte geben Sie eine beliebige Zahl ein: ");
            scanf("%d", &number);
            printf("Sie haben die Zahl %d eingegeben.\n", number);
            
            break;
        case 2:
            #define CHAR_ARRAY
            // Benutzer zur Eingabe eines Buchstabens auffordern
            char letter;
            char *ptr = letter;
            printf("Bitte geben Sie einen beliebeigen Buchstaben ein: ");
            scanf(" %c", &letter);  // Beachte das Leerzeichen vor %c, um Leerzeichen zu überspringen
            printf("Sie haben den Buchstaben %c eingegeben.\n", letter);
            break;
        default:
            printf("Ungueltige Option.\n");
    }

    //Array generieren
    puts("Array is build");
    #ifdef INT_ARRAY
       fillArrayWithRandomLetters(array);
    #endif

    #ifdef CHAR_ARRAY
       fillArrayWithRandomNumbers(array);
    #endif

    //Ausgabe des Arrays
    puts("Generiertes Array: ");
    #ifndef DEBUG
    #define DEBUG
    #endif
    DEBUG;

    //Durchsuchen des Arrays
    puts("Search");

    #ifdef LINEAR_SEARCH
       VALUE = linear_suchen(*SEARCH_ELEMENT, array); //hier kommt der Index im Array zurück
    #endif

    //Ergebnis der Suche
    puts("Ergebnis");
    #if VALUE == (-1) 
        NO_SUCCESS
    #else
        printf("Der gesuchte Wert %c steht an Stelle %i der Liste. ", array[VALUE], (VALUE + 1));
    #endif

    return 0;
}

