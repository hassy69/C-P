#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    printf("Entrez deux nombres entiers : ");
    scanf("%d %d", &num1, &num2);
    printf("Entrez un opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            printf("Résultat: %d\n", num1 + num2);
            break;
        case '-':
            printf("Résultat: %d\n", num1 - num2);
            break;
        case '*':
            printf("Résultat: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Résultat: %d\n", num1 / num2);
            else
                printf("Erreur: Division par zéro\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Résultat: %d\n", num1 % num2);
            else
                printf("Erreur: Division par zéro\n");
            break;
        case '&':
            printf("Résultat: %d\n", num1 & num2);
            break;
        case '|':
            printf("Résultat: %d\n", num1 | num2);
            break;
        case '~':
            printf("Résultat: %d\n", ~num1);
            break;
        default:
            printf("Erreur: Opérateur non reconnu\n");
    }

    return 0;
}
