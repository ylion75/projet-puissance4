#include <stdio.h>
#include "puissance4.h"
#include "Grille.h"

void lancer_puissance4(){
    printf("Grille de puissance 4 (main)\n");
    Grille g;
    creer_grille(&g,7,6);
    printf("%s\n",toString(&g));
}
