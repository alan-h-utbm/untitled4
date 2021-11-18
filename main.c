#include <stdio.h>

#include "header.h"
#include "Formation.h"
#include "Ajouter.h"
#include "Trier.h"

int main() {

    int base=10;

    char Tabletest[10][6]={
            {'8','0','0','1','5'},
            {'8','7','3','4','2'},
            {'5', '3', '2', '0', '2'},
            {'0', '0' , '9' , '7' , '2'},
            {'9','0','5','8','3'},
            {'4','1','9','8','3'},
            {'4','1','9','8','5'},
            {'9','0','2','8','3'},
            {'8','1','6','6','4'},
            {'6','5','2','1','5'}

    };

    char tableaubase[17]={'0','1','2','3','4','5','6','7','8','9','A', 'B', 'C', 'D', 'E', 'F'};

    List *Cadre;

    Cadre=(List*) malloc(base*sizeof (List));

    prod *atrier = NULL;

    atrier= init(Tabletest, 10, atrier);

    afficher_fin(atrier);

    for (int i = 0; i < 10; ++i) {
        Cadre[i]= trierSeaux(atrier, Cadre[i], base, 1);
    }






    return 0;
}
