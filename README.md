# README - TP1 (2023-2024)

## Bibliothèques

- **C :**
  - `<stdio.h>` : Pour les entrées/sorties standard.
  - `<math.h>` : Pour les calculs mathématiques (utilisé dans *cercle.c* pour pi et autres fonctions).
  
- **Python :**
  - **math** : Utilisée pour les calculs mathématiques (par exemple, `math.pi` pour obtenir la valeur de pi).
  - **sys** : Utilisée pour obtenir la taille des objets avec `sys.getsizeof()`.

## Références

1. **Documentation C :** [https://en.cppreference.com/w/c](https://en.cppreference.com/w/c)
2. **Documentation Python :** [https://docs.python.org/3/](https://docs.python.org/3/)
3. **Tutoriels et aides :**
   - StackOverflow pour les questions spécifiques sur C et Python.
   - Documentation de GCC pour la compilation des programmes en C.
   - ChatGpt pour des questions spécifiques

## Difficulté rencontrée

1. **Découverte du language C :** Nous avons tout deux uniquement travaillé avec python donc les habitudes de rigueurs ont été assez durs à maitriser au départ.
   
2. **Problèmes divers avec les machines virtuels :** Lié au fait que nous travaillons sur MacOs

## Commentaires

- **Compilation C :** Il est important de bien lier la bibliothèque mathématique (`-lm`) pour les programmes qui utilisent des fonctions mathématiques (comme dans *cercle.c*).
  
- **Python 3 :** S'assurer d'exécuter les programmes Python avec `python3` pour éviter les incompatibilités avec Python 2.

- **Tests :** Chaque programme a été testé avec différentes valeurs pour vérifier son bon fonctionnement, et les résultats obtenus ont été comparés entre C et Python pour garantir la cohérence.
