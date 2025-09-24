#include <stdio.h>

int main() {
    int n;
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);
    printf("Les %d premiers nombres impairs sont : ", n);
    for (int i = 1; i <= n * 2; i += 2) {
        printf("%d ", i);
    }
}
