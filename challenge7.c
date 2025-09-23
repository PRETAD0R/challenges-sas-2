#include <stdio.h>


int main() {
    double n1, n2, n3;
    double moyenne;

    printf("Entrez le premier nombre : ");
    scanf("%lf", &n1);

    printf("Entrez le deuxieme nombre : ");
    scanf("%lf", &n2);

    printf("Entrez le troisieme nombre : ");
    scanf("%lf", &n3);

    moyenne = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

    printf("La moyenne ponderee est : %.2lf\n", moyenne);
}
