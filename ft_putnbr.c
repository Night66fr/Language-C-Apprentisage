#include <stdio.h>

void calcul_digits(int n) {
    putchar((n / 1000) + '0');
    putchar(((n / 100) % 10)+ '0');
    putchar(((n / 10) % 10) + '0');
    putchar((n % 10) + '0');
}

void calcul_compteur(int maximum) {
    for (int i = 0; i <= 9999; i++) {
        calcul_digits(i);
        if (i < maximum) {
            putchar(',');
            putchar(' ');
        }
    }
}

int main() {
    calcul_compteur(9999);
    putchar('\n');
    return 0;
}