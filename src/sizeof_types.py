import sys

# Définition des types de base
int_value = 1  # Un entier
float_value = 1.9  # Un flottant
bool_value = True  # Une valeur booléenne
str_value = "Hell"  # Une chaîne de caractères
list_value = [1, 2, 3, 4, 5]  # Une liste
tuple_value = (1, 2, 3, 4, 5)  # Un tuple
dict_value = {'a': 0, 'b': 5, 'c': 3}  # Un dictionnaire

# Affichage de la taille de chaque objet en mémoire
print(f"Taille d'un int : {sys.getsizeof(int_value)} octets")
print(f"Taille d'un float : {sys.getsizeof(float_value)} octets")
print(f"Taille d'un bool : {sys.getsizeof(bool_value)} octets")
print(f"Taille d'une str : {sys.getsizeof(str_value)} octets")
print(f"Taille d'une list : {sys.getsizeof(list_value)} octets")
print(f"Taille d'un tuple : {sys.getsizeof(tuple_value)} octets")
print(f"Taille d'un dict : {sys.getsizeof(dict_value)} octets")
