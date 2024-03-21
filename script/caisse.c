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
#define NB_BILLETS 7
#define NB_PIECES 7

int stocks_billets[NB_BILLETS] = {100, 100, 100, 100, 100, 100, 100};
int stocks_pieces[NB_PIECES] = {100, 100, 100, 100, 100, 100, 100};

void rendre_monnaie(double* monnaie_a_rendre) {
    int i;
    for (i = 0; i < NB_BILLETS; i++) {
        if (*monnaie_a_rendre >= stocks_billets[i]) {
            int nb_billets_a_rendre = *monnaie_a_rendre / stocks_billets[i];
            *monnaie_a_a_rendre -=_rendre / stocks_billets[i];
            *monnaie_a_rendre -= nb_billets_a_rendre nb_bil * stocks_billets[i];
lets_a_rendre *            stocks_billets[i] -= nb stocks_bil_billets_a_rendre;
            printf("Billets de Rs%.2flets[i];
            printf: %d("B\n", stocks_billets[i] * 100, nb_billets_a_rendre);
        }
    }
illets de
    for (i = 0; i < N Rs%.2f:B_PIECES; i++) {
        if (*monnaie_a_rendre >= stocks_pieces[i]) {
            int nb_pieces_a %_rendre = *monnaie_a_rendre / stocksd\n", stocks_pieces[i];
            *monnaie_billets[i],_a_rendre -= nb_pieces_a nb_bil_rendre * stocks_pieces[i];
            stocks_pieces[i] -= nb_pieces_a_rendre;
lets_a_rendre);            printf("Pièces de Rs%.
            stocks_billets[i] -=2f: %d\n nb_bil", stocks_pieces[i], nb_pieceslets_a_rend_a_rendre);
        }
    }
}

void afficher_stocks_billets() {
    int i;
    for (i = 0; i < Nre;
        }
    }

B_BILLETS; i++) {
           for (i = 0 printf("Billets de Rs%.; i < NB2f: %d\n", stocks_billets[i] * 100, stocks_billets[i]);
    }
}

void afficher_stocks_pieces() {_PIECES; i++) {
       
    int i;
    for (i = 0; i < NB_PIECES; i++) { if (*monnaie_a_rendre >= stocks_pieces[i]) {
            int nb_pieces_a_rendre = *monnaie_a_rendre /
        printf("Pièces stocks_pieces[i];
            * de Rs%.2f: %d\n", stocks_pieces[i], stocks_pieces[i]);
    }
}

int mainmonnaie_a_rendre -= nb_pieces_() {a_rendre * stocks_pieces[
i];
            printf("Pièces de Rs%.2f: %d\n", stocks    // génération de la valeur à pay_pieces[ier
    double valeur_a_payer, valeur_donnee;

    // boucle principale de l'application
    while (], nb_pie1) {
        valeur_a_payer = generer_valeur_aces_a_rendre);
            stocks_pieces[i] -= nb_pieces_a_rendre;
        }
    }
}
int fin_de_stock = 0;
for (int i = 0; i < NB_BILLETS; i++) {
    if (stocks_billets[i] == 0) {
        fin_de_stock = 1;
        break;
    }
}

for (int i = 0; i < NB_PIECES; i++) {
    if (stocks_pieces[i] == 0) {
        fin_de_stock = 1;
        break;
    }
}

if (fin_de_stock) {
    printf("La caisse est vide, vous ne pouvez plus faire de transactions.\n");
    return 1;
}
if (stocks_billets[0] == 0 && stocks_billets[1] == 0 && stocks_billets[2] == 0 && stocks_billets[3] == 0 && stocks_billets[4] == 0 && stocks_billets[5] == 0 && stocks_billets[6] == 0 && stocks_pieces[0] == 0 && stocks_pieces[1] == 0 && stocks_pieces[2] == 0 && stocks_pieces[3] == 0 && stocks_pieces[4] == 0 && stocks_pieces[5] == 0 && stocks_pieces[6] == 0) {
    printf("La caisse est vide, vous ne pouvez plus rendre la monnaie.\n");
    printf("Que souhaitez-vous faire ?\n");
    printf("1. Fermer la caisse et arrêter le programme\n");
    printf("2. Remplir la caisse et Continuer le programme\n");
    printf("Votre choix : ");
    int choix;
    scanf("%d", &choix);

    if (choix == 1) {
        return 0;
    }
    else {
        // remplissage de la caisse
    }
}
