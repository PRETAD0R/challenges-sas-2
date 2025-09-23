#include <stdio.h>
 
int main() {
    int a,b;
    int somme;
    printf("Entrez le premier nombre : ");
    scanf("%d", &a);
    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &b);    

    somme = a + b;

if (a==b) {
    somme = 3 * somme;
    printf("les deux nombres sont egaux, le triple de leur somme est : %d\n", somme);
    }
else {
    printf("les deux nombres sont differents, leur somme est : %d\n", somme );
    }
}