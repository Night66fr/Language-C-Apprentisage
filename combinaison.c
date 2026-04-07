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
            printf("%d%d", nombre_dizaine, nombre_unite);
            printf("\n");
        }        
    }    
}

int main() {
    compteur();
    return 0;
}