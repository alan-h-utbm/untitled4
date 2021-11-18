//
// Created by alanh on 18/11/2021.
//

#include "Trier.h"
#include "Ajouter.h"

List trierSeaux(List l, List Cadre, int base, int passagz){

    prod *tmp=l;

    for (int i = 0; i < base; ++i) {

    }
    while (l!=NULL){
        Cadre= ajout_fin(Cadre, tmp->tableau);
        l=l->next;
    }




}