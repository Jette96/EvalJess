// "function.h"
#ifndef FUNCTION_H_
#define FUNCTION_H_
#include "helper.h"

// Array mit zufaelligen Elementen fuellen
#ifdef CHAR_ARRAY
void fillArrayWithRandomLetters(char array[]);
#endif

#ifdef INT_ARRAY
void fillArrayWithRandomNumbers(int array[]);
#endif

// Ausgabe des Arrays
#ifdef DEBUG
#ifdef CHAR_ARRAY
void printArray(char array[]);
#elif defined INT_ARRAY
void printArray(int array[]);
#endif
#endif

// Such-Algorithmus
#ifdef INT_ARRAY
int linear_search_int(int *search_element, int array[]);
#elif defined CHAR_ARRAY
int linear_search_char(char *search_element, char array[]);
#endif

#endif
