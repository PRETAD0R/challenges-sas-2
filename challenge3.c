#include <stdio.h>

void main () {
    int km;
    printf("Entrez une distance en km : ");
    scanf("%d", &km);
    int yards = km * 1093.61;
    printf("La distance en yards est : %d yards\n", yards);
}