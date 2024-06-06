// "function.c"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

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
void printArray() {
    for (int i = 0; i < ARRAY_SIZE; i++) {
#ifdef INT_ARRAY
        printf("%d ", array[i]);
#else // CHAR_ARRAY
        printf("%c ", array[i]);
#endif
    }
    printf("\n");
}

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
