#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void plus_moins(int choix_joueur, int valeur_a_trouver);

int main() {
    int mode;
    int essais_max;
    int essais = 0;
    int valeur_a_trouver;
    int choix_joueur;

    srand(time(NULL));

    printf("Choisissez un mode de difficulte (0 = facile, 1 = moyen, 2 = difficile) : ");
    scanf("%d", &mode);

    switch (mode) {
        case 0:
            essais_max = -1;
            break;
        case 1:
            essais_max = 25;
            break;
        case 2:
            essais_max = 10;
            break;
        default:
            essais_max = -1;
            printf("Mode invalide. Mode facile (illimite) selectionne par defaut.\n");
            break;
    }

    valeur_a_trouver = (rand() % 100) + 1;
    printf("Un nombre entre 1 et 100 a ete genere. Essayez de le deviner.\n");

    do {
        printf("Votre choix : ");
        scanf("%d", &choix_joueur);

        plus_moins(choix_joueur, valeur_a_trouver);
        essais++;

        if (essais_max != -1 && essais >= essais_max) {
            printf("Nombre d'essais depasse. Perdu ! La valeur etait : %d\n", valeur_a_trouver);
            break;
        }
    } while (choix_joueur != valeur_a_trouver);

    if (choix_joueur == valeur_a_trouver && (essais_max == -1 || essais <= essais_max)) {
        printf("Felicitations ! Vous avez trouve la valeur en %d essais.\n", essais);
    }

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
