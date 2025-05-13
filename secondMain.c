#include <stdio.h>

// Funktion bekommt einen Zeiger der auf eine int-Variable zeigt
void verdoppeln(int *MainNumber) { 
    *MainNumber *= 2; // Dereferenziere Zeiger und verdopple den Wert an der Adresse

    // Dereferenziere = Greife auf den Wert an der Adresse zu, auf die ein Zeiger zeigt.
}

int main() {
   int MainNumber = 7; // Deklariert eine int-Variable und weist ihr den Wert 7 zu

   verdoppeln(&MainNumber); // Übergibt die Adresse von MainNumber an die Funktion

   printf("%d",MainNumber); // Gibt den neuen Wert von MainNumber aus (jetzt 14)

}