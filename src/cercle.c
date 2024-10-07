#include <stdio.h>
#include <math.h>  // pour la constante M_PI

int main() {
    double rayon, perimetre, aire;

    // Demander à l'utilisateur de saisir le rayon
    printf("Entrez le rayon du cercle : ");
    scanf("%lf", &rayon);

    // Calculer le périmètre et l'aire
    perimetre = 2 * M_PI * rayon;
    aire = M_PI * rayon * rayon;

    // Afficher les résultats
    printf("Le périmètre du cercle est : %.2lf\n", perimetre);
    printf("L'aire du cercle est : %.2lf\n", aire);

    return 0;
}
