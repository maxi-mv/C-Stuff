#include <stdio.h>
#include <stdlib.h> // für malloc und free

//aufgabe: 
/*
Aufgabe 1: Einfache dynamische Array-Zuweisung
Reserviere dynamisch Speicher für 5 ganze Zahlen (mit malloc).

Speichere in den 5 Zahlen die Werte 10, 20, 30, 40 und 50.

Gib diese Zahlen auf der Konsole aus.

Gib den reservierten Speicher nach der Nutzung wieder frei (free).
*/


int main() {
    int array[] = {10, 20, 30 , 40 ,50};

    int n = sizeof(array) / sizeof(array[0]);

    int *p = malloc(n * sizeof(int));

    
    for (int i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }

    free(p);

    return 0;

}