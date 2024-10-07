def afficher_binaire():
    # On utilise une chaîne pour stocker les bits
    bits = ""
    # Lire un nombre entier depuis l'entrée utilisateur
    nombre = int(input("Entrez un nombre entier : "))
    # Si le nombre est 0, sa représentation binaire est 0
    if nombre == 0:
        bits = "0"
    else:
        # Calculer les bits en divisant successivement par 2
        while nombre > 0:
            bits = str(nombre % 2) + bits  # Ajouter le reste au début de la chaîne
            nombre = nombre // 2  # Diviser par 2

    print(f"Représentation binaire : {bits}")

# Appeler la fonction pour afficher la représentation binaire
afficher_binaire()
