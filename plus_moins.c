#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mode;
int essais_max:
int essais = 0;

printf("choisissez un mode de difficulte ( 0 = facile, 1 = moyen,
2 =difficile) : ");
scanf("%d" , &mode);

switch (mode) {
    case 0: essais_max = -1;
break;
    case 1: essais_max = 25; break;
    case 2; essais_max = 10; break;
    default; essais_max = -1;
}
int main(){
     srand(time(NULL)); //initialise le generateur
     int valeur_a_trouver;
     int choix_joueur;

     do {
          printf("Votre choix : "):
          scanf("%d" , &choix_joueur);
          plus_moins(choix_joueur , valeur_a_trouver);
	  essais++;
	  if (essais_max != -1 && essais >+ essais_max) {
	     printf("Nombre d`essais depasse.Perdu !\n");
	     break;
	  }
     } while (choix_joueur != valeur_a_trouver);
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

