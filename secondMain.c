#include <stdio.h>

// Funktion bekommt einen Zeiger der auf eine int-Variable zeigt
void verdoppeln(int *MainNumber) { 
    *MainNumber *= 2; // Dereferenziere Zeiger und verdopple den Wert an der Adresse

    // Dereferenziere = Greife auf den Wert an der Adresse zu, auf die ein Zeiger zeigt.
}

int main() {
   int MainNumber = 7; //deklariert main variable

   verdoppeln(&MainNumber); // main nummer wird an den speicher übergeben

   printf("%d",MainNumber); //main nummer wird als int mit %d angezeigt 

}