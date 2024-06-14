// "helper.h"
#ifndef HELPER_H_
#define HELPER_H_

//Default-Wert
#define VALUE (-1)

// Hilfsvariablen und Symbole
#define INT_SUCCESS printf("Der gesuchte Wert %d steht an Stelle %d der Liste.\n", array[VALUE], (VALUE + 1));
#define CHAR_SUCCESS printf("Der gesuchte Wert %c steht an Stelle %d der Liste.\n", array[VALUE], (VALUE + 1));
#define NO_SUCCESS printf("Der gesuchte Wert ist nicht im Array.\n");

// Array Eigenschaften
#define SIZE 10

//Definition CHOICE fuer Wahl der Cases und bedingte Kompilierung von INT_ARRAY und CHAR_ARRAY
#define CHOICE 2

// Definition der Direktive fuer Art des Arrays
#if CHOICE == 1
    #define INT_ARRAY
#elif CHOICE == 2
    #define CHAR_ARRAY
#endif

#endif
