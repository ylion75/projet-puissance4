#ifndef GRILLE_INCLUDED
#define GRILLE_INCLUDED

struct Grille {
    unsigned int nbColonnes;
    unsigned int nbLignes;
    char *cases;

};

void creer_grille(Grille*, unsigned int nbColonnes, unsigned int nbLignes);
char get(Grille*, char colonne, unsigned int ligne);
void set(Grille*, char colonne, unsigned int ligne, char);
char* toString(Grille* g);

#endif // GRILLE_INCLUDED
