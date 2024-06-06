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

#endif
