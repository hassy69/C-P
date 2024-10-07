# Comparaison entre C et Python

## 1. Bases de la programmation

- **Affichage des données** : C utilise `printf()` avec des formats spécifiques pour chaque type de données, tandis que Python utilise `print()` de manière plus flexible et sans format explicite pour les types simples.

## 2. Manipulation des variables

- **Typage** : C nécessite une déclaration explicite des types de variables (par exemple, `int`, `float`), alors que Python utilise un typage dynamique, ce qui signifie que les types sont déterminés automatiquement à l'exécution.
- **Typage statique en Python** : Il est possible d'utiliser des annotations pour indiquer le type des variables, mais elles ne sont pas obligatoires.

## 3. Opérateurs

- **Arithmétiques et logiques** : Les opérateurs arithmétiques et logiques de base sont similaires dans les deux langages. Python gère automatiquement les entiers de taille arbitraire, tandis que C utilise des types à taille fixe.
- **Bit à bit** : Les deux langages supportent les opérations bit à bit, mais C est plus bas niveau et plus strict concernant les limites de taille des types.

## 4. Boucles et structures de contrôle

- **Délimitation des blocs** : En C, les blocs de code sont délimités par des accolades `{}`, tandis qu'en Python, l'indentation est utilisée pour structurer le code.
- **Boucles et conditions** : Les deux langages supportent les boucles `for`, `while` et les structures conditionnelles `if`, mais Python est plus simple et lisible grâce à son indentation stricte (switch en C plus complexe que if-elif en Python). Cependant, les structures de contrôle en C bien que plus complexe qu'en Python, restent plus précis.

## 5. Conversion et formatage

- **Formatage** : En C, il faut utiliser `printf()` avec des formats pour afficher différentes valeurs, alors que Python utilise des méthodes modernes comme les `f-strings` pour un formatage plus facile.
- **Conversion** : Les conversions, comme la conversion en binaire, sont manuelles en C, alors que Python propose des fonctions intégrées pour ces opérations.
