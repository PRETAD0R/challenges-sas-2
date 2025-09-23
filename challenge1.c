#include <stdio.h>
#include <stdlib.h>

void main () {
    char nom[30];
    char prenom[30];
    char email[30];
    char sexe[30];
    int age = 18;
    printf("Entrez votre nom : ");
    scanf("%s", nom);
    printf("Entrez votre prenom : ");
    scanf("%s", prenom);
    printf("Entrez votre email : ");
    scanf("%s", email);
    printf("Entrez votre sexe : ");
    scanf("%s", sexe);
    printf("Entrez votre age : ");
    scanf("%d", &age);
    printf("Bonjour %s %s, vous avez %d ans, votre email est %s et vous etes de sexe %s.\n", prenom, nom, age, email, sexe);
}