#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, som, prod, sous;
    float div; // On change div en float pour gérer les résultats avec décimales

   // Demande des entrées à l'utilisateur
    printf("Entrez deux nombres:\n");
    scanf("%d", &a);
    scanf("%d", &b);

   // Affichage du menu
    printf("Choisissez une opération :\n");
    printf("1. Somme\n");
    printf("2. Produit\n");
    printf("3. Division\n");
    printf("4. Soustraction\n");
    scanf("%d", &c);

   // Calcul et affichage des résultats
    if(c == 1) {
        som = a + b;
        printf("La somme est %d\n", som);
    }
    else if(c == 2) {
        prod = a * b;
        printf("Le produit est %d\n", prod);
    }
    else if(c == 3) {
        // Vérification pour éviter la division par zéro
        if(b != 0) {
            div = (float)a / b;  // Cast pour avoir un résultat avec décimale
            printf("La division est %.2f\n", div);  // Affiche le résultat avec 2 décimales
        } else {
            printf("Erreur : Division par zéro !\n");
        }
    }
    else if(c == 4) {
        sous = a - b;
        printf("La soustraction est %d\n", sous);
    }
    else {
        printf("Erreur : Option invalide.\n");
    }

   return 0;
}
