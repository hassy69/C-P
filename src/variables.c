#include <stdio.h>
#include <limits.h>  // Pour les limites des types entiers
#include <float.h>   // Pour les limites des types flottants

int main() {
    // Déclaration et initialisation des variables

    // Types char
    char c = 'A';  // Représentation d'un caractère
    signed char sc = -128;  // Valeur négative minimale possible pour un char signé
    unsigned char uc = UCHAR_MAX;  // Valeur maximale pour un char non signé (255)

    // Types short
    short s = -32768;  // Valeur négative minimale possible pour un short signé
    unsigned short us = USHRT_MAX;  // Valeur maximale pour un short non signé (65535)

    // Types int
    int i = -2147483648;  // Valeur négative minimale possible pour un int signé
    unsigned int ui = UINT_MAX;  // Valeur maximale pour un int non signé (4294967295)

    // Types long int
    long int li = LONG_MIN;  // Valeur négative minimale possible pour un long int signé
    unsigned long int uli = ULONG_MAX;  // Valeur maximale pour un long int non signé (4294967295 ou plus selon la plateforme)

    // Types long long int
    long long int lli = LLONG_MIN;  // Valeur négative minimale possible pour un long long int signé

    // Types flottants
    float f = 3.14f;  // Valeur flottante
    double d = 2.718281828459045;  // Valeur flottante double précision
    long double ld = 1.618033988749895L;  // Valeur flottante de grande précision (nombre d'or)

    // Affichage des valeurs des variables
    printf("char: %c\n", c);
    printf("signed char: %d\n", sc);
    printf("unsigned char: %u\n", uc);

    printf("short: %d\n", s);
    printf("unsigned short: %u\n", us);

    printf("int: %d\n", i);
    printf("unsigned int: %u\n", ui);

    printf("long int: %ld\n", li);
    printf("unsigned long int: %lu\n", uli);

    printf("long long int: %lld\n", lli);

    printf("float: %f\n", f);
    printf("double: %lf\n", d);
    printf("long double: %Lf\n", ld);

    return 0;
}
