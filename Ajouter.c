//
// Created by alanh on 18/11/2021.
//

#include "Ajouter.h"


List ajout_fin(List l, char tableau[6]) {

    /* On crée un nouveau produit */
    prod *nouveauProd = malloc(sizeof(prod));

    /* On assigne les données du nouveau produit */
    strcpy(nouveauProd->tableau, tableau);

    /* On ajoute en fin, donc aucun produit ne va suivre */
    nouveauProd->next = NULL;

    if(l == NULL)
    {
        /* Si la liste est videé il suffit de renvoyer le produit créé */
        return nouveauProd;
    }
    else
    {
        /* Sinon, on parcourt la liste à l'aide d'un pointeur temporaire et on
        indique que le dernier produit de la liste est relié au nouveau produit */
        prod *temp=l;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = nouveauProd;
        return l;
    }
}

List ajout_tete(List l, List atrier, int i){

    /* On crée un nouveau produit */
    prod *nouveauProd = malloc(sizeof(prod));



    /* On assigne les données du nouveau produit */
    strcpy(nouveauProd->tableau, atrier->tableau);

    // printf("tableau[%d] fonction : %s\n",i, Tableau[i]);
    // printf("4eme case : %c\n", Tableau[i][4]);

    nouveauProd->quantite=i;

    /* On assigne l'adresse du produit suivant au nouveau produit */
    if(l==NULL){
        nouveauProd->next=NULL;
    }

    nouveauProd->next = l;

    /* On retourne la nouvelle liste, i.e. le pointeur sur le premier produit */
    return nouveauProd;

}