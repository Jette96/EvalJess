// "function.c"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.h"
#include "header.h"
#include "main.h"

// Array mit zufaelligen Elementen fuellen
#ifdef CHAR_ARRAY
void fillArrayWithRandomLetters(char array[]) {
    srand(time(NULL)); // Initialisieren des Zufallszahlengenerators
    for (int i = 0; i < ARRAY_SIZE; i++) {
        array[i] = 'A' + (rand() % 26); // Zufallsbuchstaben zwischen 'A' und 'Z'
    }
    array[ARRAY_SIZE] = '\0'; // Null-terminierte Zeichenkette = String
}
#endif

#ifdef INT_ARRAY
void fillArrayWithRandomNumbers(int array[]) {
    srand(time(NULL)); // Initialisieren des Zufallszahlengenerators
    for (int i = 0; i < ARRAY_SIZE; i++) {
         array[i] = rand() % 51; // Zufallszahlen zwischen 0 und 50
    }
}
#endif

// Ausgabe des Arrays
#ifdef INT_ARRAY
void printArray(int array []) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
#elif defined CHAR_ARRAY
void printArray(char array[]) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%c ", array[i]);
    }
}
#endif

// Such-Algorithmus
#ifdef INT_ARRAY
int linear_search_int(int *search_element, int array[]) {
    int index = INDEX; // -1, wenn nicht gefunden
    // Jedes Element von vorne beginnend wird angeschaut
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if(array[i] == *search_element) {
            index = i;
            break;
        }
    }
    return index;
}
#elif defined CHAR_ARRAY
int linear_search_char(char *search_element, char array[]) {
    int index = INDEX; // -1, wenn nicht gefunden
    // Jedes Element von vorne beginnend wird angeschaut
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if(array[i] == *search_element) {
            index = i;
            break;
        }
    }
    return index;
}
#endif
