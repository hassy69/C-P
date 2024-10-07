#include <stdio.h>

void afficherBinaire(int nombre) {
    // Un tableau pour stocker les bits (32 bits pour un entier)
    int bits[32];
    int i;

    // Initialiser tous les bits à 0
    for (i = 0; i < 32; i++) {
        bits[i] = 0;
    }

    // Calculer les bits en divisant par 2 successivement
    i = 0;
    while (nombre > 0) {
        bits[i] = nombre % 2;  // Stocker le reste de la division par 2
        nombre = nombre / 2;    // Diviser par 2
        i++;
    }

    // Afficher les bits en ordre inverse pour obtenir la représentation correcte
    printf("Représentation binaire : ");
    for (i = 31; i >= 0; i--) {
        printf("%d", bits[i]);
    }
    printf("\n");
}

int main() {
    int nombre;

    // Lire un nombre entier
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    // Appeler la fonction pour afficher la représentation binaire
    afficherBinaire(nombre);

    return 0;
}
