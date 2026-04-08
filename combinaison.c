#include <stdio.h>

void compteur() {
    int i;
    int j;
    int nombre_dizaine;
    int nombre_unite;
    for (i=0;i<=9; i++) {
        nombre_dizaine = i;
        for (j=0;j<=9; j++) {
            nombre_unite = j;
            putchar(nombre_dizaine + '0');
            putchar(nombre_unite + '0');
            putchar('\n');
        }        
    }    
}

int main() {
    compteur();
    return 0;
}