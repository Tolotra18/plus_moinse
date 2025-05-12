#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
     srand(time(NULL)); //initialise le generateur
     int valeur_a_trouver;
     int choix_joueur;
     
     printf("Valeur a deviner generee (pour debogage) : %d\n",
valeur_a_trouver)";

     printf("Votre choix : "):
     scanf("%d" , &choix_joueur);

     plus_moins(choix_joueur , valeur_a_trouver);

     return 0;
}

void plus_moins(int choix_joueur, int valeur_a_trouver) {
    if (choix_joueur < valeur_a_trouver) {
	printf("Plus\n");
    } else if (choix_joueur > valeur_a_trouver) {
	printf("Moins\n");
    } else {
	printf("Bingo\n");
    }
}

