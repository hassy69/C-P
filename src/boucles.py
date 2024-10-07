# # Objectif : Demander à l'utilisateur de saisir une taille pour le triangle.
# taille = int(input("Entrez une taille (inférieure à 10) : "))

# # Objectif : Vérifier si la taille entrée est correcte (strictement inférieure à 10 et positive).
# if taille >= 10 or taille <= 0:
#     print("Erreur: La taille doit être strictement inférieure à 10 et positive.")
# else:
#     # Objectif : Boucler à travers chaque ligne du triangle.
#     for i in range(1, taille + 1):
#         # Objectif : Alterner les caractères '*' et '#' dans chaque ligne.
#         for j in range(1, i + 1):
#             if j % 2 == 1:
#                 print("*", end=" ")
#             else:
#                 print("#", end=" ")
#         # Objectif : Passer à la ligne suivante après avoir imprimé une ligne du triangle.
#         print()

# Objectif : Demander à l'utilisateur de saisir une taille pour le triangle.
taille = int(input("Entrez une taille (inférieure à 10) : "))

# Objectif : Vérifier si la taille entrée est correcte (strictement inférieure à 10 et positive).
if taille >= 10 or taille <= 0:
    print("Erreur: La taille doit être strictement inférieure à 10 et positive.")
else:
    # Objectif : Initialiser la première ligne du triangle.
    i = 1

    # Objectif : Utiliser une boucle 'while' pour gérer chaque ligne du triangle.
    while i <= taille:
        j = 1

        # Objectif : Utiliser une boucle 'while' pour alterner les caractères '*' et '#'.
        while j <= i:
            if j % 2 == 1:
                print("*", end=" ")
            else:
                print("#", end=" ")
            j += 1

        # Objectif : Passer à la ligne suivante après avoir imprimé une ligne du triangle.
        print()
        i += 1
