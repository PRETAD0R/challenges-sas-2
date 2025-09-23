#include <stdio.h>
 int main() {
    printf("Entrez un nombre : ");
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Le nombre %d est pair.\n", n);
    } else {
        printf("Le nombre %d est impair.\n", n);
    }
}