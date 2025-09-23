#include <stdio.h>

void main () {
    int temp;
    printf("Entrez une température en Celsius :\n");
    scanf("%d", &temp);
    if (temp < 0)
    {
        printf("l'etat de l'eau est solide.\n");
    }
    else if (temp >= 0 && temp < 100)
    {
        printf("l'etat de l'eau est liquide.\n");
    }
    else 
    {
        printf("l'etat de l'eau est gazeux.\n");
    }
}