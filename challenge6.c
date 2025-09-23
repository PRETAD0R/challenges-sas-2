#include <stdio.h>

int main() {
    printf("Entrez la valeur de a : ");
    int a;
    scanf("%d", &a);
    printf("Entrez la valeur de b : ");
    int b;
    scanf("%d", &b);

    double somme = a + b;
    double difference = a - b;
    double produit = a * b;
    printf("La somme de %d et %d est : %.2f\n", a, b, somme);
    printf("La difference de %d et %d est : %.2f\n", a, b, difference);
    printf("Le produit de %d et %d est : %.2f\n", a, b, produit);

    if (b != 0) {
        double quotient = (double)a / b;
        printf("Le quotient de %d et %d est : %.2f\n", a, b, quotient);
    } else {
        printf("Erreur : Division par zero impossible.\n");
    }
}