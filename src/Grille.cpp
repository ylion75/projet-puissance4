#include <stdio.h>
#include <malloc.h>
#include "Grille.h"
#include "puissance4.h"

void creer_grille(Grille*g, unsigned int nbColonnes, unsigned int nbLignes){
    g -> nbColonnes = nbColonnes;
    g -> nbLignes = nbLignes;
    g -> cases = (char*)malloc(nbColonnes * nbLignes * sizeof(char));
        for(unsigned int i = 0; i < nbColonnes * nbLignes; i++){
        g -> cases[i]='.';
        }
}

char get(Grille* g, char colonne, unsigned int ligne) {
    return g->cases[g->nbColonnes* (ligne -1) + (colonne -'a')];
}

void set(Grille* g, char colonne, unsigned int ligne, char c) {
    g->cases[g->nbColonnes* (ligne -1) + colonne - 'a'] = c;
}

unsigned int getLignes (const Grille *g){
    return g->nbLignes;
}

unsigned int getColonnes (const Grille *g){
    return g->nbColonnes;
}

char* toString(Grille* g) {
    unsigned int taille_s = ((g -> nbColonnes+1) * g -> nbLignes)*3+1; // le *2 correspond à l'espace derrière "%c "
    unsigned int lgr = 0;
    char*s = (char*)malloc(taille_s +1);
    for (unsigned int lig = getLignes(g); lig >= 1; --lig) {
    //lgr+=sprintf(s + lgr,"%i ", lig);
        for (char col = 'a'; col < 'h'; ++col)
        {
            lgr += sprintf(s + lgr,"|%c", get(g, col, lig));
        }

        lgr+= sprintf(s+lgr, "|\n");
    }
    return s;
}

