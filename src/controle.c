#include <stdio.h>

int main() {
    for (int i = 1; i <= 1000; i++) {
        // Vérifier si un nombre est divisible par 4 mais pas par 6
        if (i % 4 == 0 && i % 6 != 0) {
            printf("%d\n", i);
        }
    }
    for (int i = 1; i <= 1000; i++) {
        // Vérifier si un nombre est pair et divisible par 8
        if (i % 2 == 0 && i % 8 == 0) {
            printf("%d\n", i);
        }
    }
    for (int i = 1; i <= 1000; i++) {
        // Vérifier si un nombre est divisible par 5 ou 7 mais pas par 10
        if ((i % 5 == 0 || i % 7 == 0) && i % 10 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
