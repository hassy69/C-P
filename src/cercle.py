import math

# Demande à l'utilisateur de saisir le rayon du cercle
rayon = float(input("Veuillez entrer la valeur du rayon du cercle : "))

# Calcul de l'aire du cercle
aire = math.pi * rayon * rayon

# Calcul du périmètre du cercle
perimetre = 2 * math.pi * rayon

# Affichage des résultats
print(f"L'aire du cercle est : {aire:.2f}")
print(f"Le périmètre du cercle est : {perimetre:.2f}")
