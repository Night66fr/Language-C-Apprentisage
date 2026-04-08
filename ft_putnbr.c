#include <stdio.h>

void afficher_chiffres(int n) {
    int i;
    int dizaine;
    int unite;
    int centaine;
    for (i = 0; i <= 999; i++) {
        centaine = i / 100;
        dizaine = (i / 10) % 10;
        unite = i % 10;
        putchar(centaine + '0');
        putchar(dizaine + '0');
        putchar(unite + '0');
        if (i < 999) {
            putchar(',');
            putchar(' ');
        }
    }    
}


int main() {
    int i;
    afficher_chiffres(i);
    putchar('\n');
    return 0;
}