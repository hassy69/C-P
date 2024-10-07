// #include <stdio.h>

// int main() {
//     // Objectif : Demander à l'utilisateur de saisir une taille pour le triangle.
//     int taille;
//     printf("Entrez une taille (inférieure à 10) : ");
//     scanf("%d", &taille);

//     // Objectif : Vérifier si la taille entrée est correcte (strictement inférieure à 10 et positive).
//     if (taille >= 10 || taille <= 0) {
//         printf("Erreur: La taille doit être strictement inférieure à 10 et positive.\n");
//         return 1;
//     }

//     // Objectif : Boucler à travers chaque ligne du triangle.
//     for (int i = 1; i <= taille; i++) {
//         // Objectif : Alterner les caractères '*' et '#' dans chaque ligne.
//         for (int j = 1; j <= i; j++) {
//             if (j % 2 == 1)
//                 printf("* ");
//             else
//                 printf("# ");
//         }
//         // Objectif : Passer à la ligne suivante après avoir imprimé une ligne du triangle.
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    // Objectif : Demander à l'utilisateur de saisir une taille pour le triangle.
    int taille;
    printf("Entrez une taille (inférieure à 10) : ");
    scanf("%d", &taille);

    // Objectif : Vérifier si la taille entrée est correcte (strictement inférieure à 10 et positive).
    if (taille >= 10 || taille <= 0) {
        printf("Erreur: La taille doit être strictement inférieure à 10 et positive.\n");
        return 1;
    }

    // Objectif : Initialiser la première ligne du triangle.
    int i = 1;

    // Objectif : Utiliser une boucle 'while' pour gérer chaque ligne du triangle.
    while (i <= taille) {
        int j = 1;
        
        // Objectif : Utiliser une boucle 'while' pour alterner les caractères '*' et '#'.
        while (j <= i) {
            if (j % 2 == 1)
                printf("* ");
            else
                printf("# ");
            j++;
        }

        // Objectif : Passer à la ligne suivante après avoir imprimé une ligne du triangle.
        printf("\n");
        i++;
    }

    return 0;
}
