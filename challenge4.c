#include <stdio.h>

void main () {
    int km_h;
    printf("Entrez une vitesse en km/h : ");
    scanf("%d", &km_h);
    int m_s = km_h * 0.27778;
    printf("La vitesse en m/s est : %d m/s\n", m_s);

}
