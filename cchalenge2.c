
#include <stdio.h>

int main() {
    char caractere;
    printf("Entrez un caractere : ");
    scanf(" %c", &caractere);
    
    switch(caractere) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'Y':
            printf("Le caractere '%c' est une voyelle.\n", caractere);
            break;
        default:
            printf("Le caractere '%c' est une consonne.\n", caractere);
    }
}