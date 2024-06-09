// "function.c"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.h"
#include "header.h"
#include "main.h"

// Array mit zufaelligen Elementen fuellen
void fillArrayWithRandomLetters(char array[]) {
    srand(time(NULL)); // Initialisieren des Zufallszahlengenerators
    for (int i = 0; i < ARRAY_SIZE; i++) {
        array[i] = 'A' + (rand() % 26); // Zufallsbuchstaben zwischen 'A' und 'Z'
    }
    array[ARRAY_SIZE] = '\0'; // Null-terminierte Zeichenkette = String
}

void fillArrayWithRandomNumbers(int array[]) {
    srand(time(NULL)); // Initialisieren des Zufallszahlengenerators
    for (int i = 0; i < ARRAY_SIZE; i++) {
         array[i] = rand() % 51; // Zufallszahlen zwischen 0 und 50
    }
}

// Ausgabe des Arrays
#ifdef INT_ARRAY
void printArray(int array []) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
#else // CHAR_ARRAY
void printArray(char array[]) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%c ", array[i]);
    }
}
#endif

// Such-Algorithmus
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
