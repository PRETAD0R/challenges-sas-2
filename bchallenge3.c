#include <stdio.h>

int main() {
    int n;
    int somme = 0;
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);
    for (int i=1; i<=n ;i++) {
        somme += i;
        printf("La somme des premiers nombres naturels de 1 a %d est : %d\n", n, somme);
    }
}