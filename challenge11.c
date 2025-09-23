#include <stdio.h>

int main() {
    int longueur, largeur;
    printf("Entrez la longueur du rectangle : ");
    scanf("%d", &longueur);
    printf("Entrez la largeur du rectangle : ");
    scanf("%d", &largeur);
    int surface = longueur * largeur;
    printf("La surface du rectangle est : %d\n", surface);
}