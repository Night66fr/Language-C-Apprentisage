#include <stdio.h>


void afficher_alphabet_inverse() {
    int i = 0;
    char lettre = 'z';
    for (i=26;i > 0; i --){
        printf("%c",lettre);
        lettre = lettre - 1;
    }
}


void afficher_alphabet() {
    int i = 0;
    char lettre = 'a';
    for (i = 0;i < 26; i++){
        printf("%c", lettre);
        lettre = lettre + 1;
    }
}


int main() {
    afficher_alphabet();
    printf("\n");
    afficher_alphabet_inverse();
    return 0;
}

