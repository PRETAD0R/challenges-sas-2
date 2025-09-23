#include <stdio.h>

void main () {
    int temp;
    printf("Entrez la temperature en Celsius : ");
    scanf("%d", temp);
    int kelvin = temp + 273;
    printf("La temperature en Kelvin est : %d K\n", kelvin);
}