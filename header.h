// "header.h"
#ifndef HEADER_H_
#define HEADER_H_

// Hilfsvariablen und Symbole
#define INT_SUCCESS printf("Der gesuchte Wert %d steht an Stelle %d der Liste. ", array[VALUE], (VALUE + 1));
#define CHAR_SUCCESS printf("Der gesuchte Wert %c steht an Stelle %d der Liste. ", array[VALUE], (VALUE + 1));
#define NO_SUCCESS printf("Der gesuchte Wert ist nicht im Array.");

#define INDEX (-1)
#define VALUE (-1)

// Array Eigenschaften
#define ARRAY_SIZE 10

// Array initialisieren
#ifdef INT_ARRAY
int array[ARRAY_SIZE];
#else // CHAR_ARRAY
char array[ARRAY_SIZE + 1]; // +1 für Null-terminierte Zeichenkette
#endif

// Array mit zufaelligen Elementen fuellen
#ifdef CHAR_ARRAY
void fillArrayWithRandomLetters(char array[]);
#endif

#ifdef INT_ARRAY
void fillArrayWithRandomNumbers(int array[]);
#endif

// Ausgabe des Arrays
#ifdef DEBUG
void printArray();
#endif

// Such-Algorithmus
#ifdef INT_ARRAY
int linear_search_int(int *search_element, int array[]);
#elif defined CHAR_ARRAY
int linear_search_char(char *search_element, char array[]);
#endif

#endif
