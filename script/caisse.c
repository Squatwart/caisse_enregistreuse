#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double generer_valeur_a_payer() {
    srand(time(NULL));
    double valeur_a_payer = (rand() % 100000) / 100.0;
    return valeur_a_payer;
}
double valeur_a_payer = generer_valeur_a_payer();
double valeur_donnee;

do {
    printf("Valeur à payer: Rs%.2f\n", valeur_a_payer);
    printf("Entrez la valeur que vous voulez donner: ");
    scanf("%lf", &valeur_donnee);

    if (valeur_donnee < valeur_a_payer) {printf("La valeur donnée est insuffisante.\n");
    }
} while (valeur_donnee < valeur_a_payer);
void calculer_monnaie(double valeur_a_payer, double valeur_donnee) {
    double monnaie_a_rendre = valeur_donnee - valeur_a_payer;
    printf("Monnaie à rendre: Rs%.2f\n", monnaie_a_rendre);
}
void rendre_monnaie(double* monnaie_a_rendre) {
    int billets[] = {2000, 1000, 500, 200, 100, 50, 25};
    int pieces[] = {20, 10, 5, 1};
    int nb_billets = sizeof(billets) / sizeof(billets[0]);
    int nb_pieces = sizeof(pieces) / sizeof(pieces[0]);

    for (int i = 0; i < nb_billets; i++) {
        if (*monnaie_a_rendre >= billets[i]) {
            int nb_billets_a_rendre = *monnaie_a_rendre / billets[i];
            *monnaie_a_rendre -= nb_billets_a_rendre * billets[i];
            printf("Billets de Rs%.2f: %d\n", billets[i], nb_billets_a_rendre);
        }
    }

    for (int i = 0; i < nb_pieces; i++) {
        if (*monnaie_a_rendre >= pieces[i]) {
            int nb_pieces_a_rendre = *monnaie_a_rendre / pieces[i];
            *monnaie_a_rendre -= nb_pieces_a_rendre * pieces[i];
            printf("Pièces de Rs%.2f: %d\n", pieces[i], nb_pieces_a_rendre);
        }
    }
}

