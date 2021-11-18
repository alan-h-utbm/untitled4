//
// Created by alanh on 18/11/2021.
//

#include "Formation.h"
#include "Ajouter.h"
#include <stdio.h>

int verif(char tableaubase[17], char Tabletest[10][6]){


    int base=10;

   int j;

    int erreur;
    int erreurentree;
    char chiffretest[6];
    int parcours;






//verifie que l'on rentre une base valide
    do {
        fflush(stdin);
        erreurentree=0;
        printf("sur quelle base voulez vous operer (de 2 a 16)  ? \n");
        scanf("%d", &base);
        if(base>16 || base<2){
            printf("erreur, veuillez rentrer une base comprise entre 2 et 16 \n");
            erreurentree=1;
        }
    } while (erreurentree!=0);


    for (int i = 0; i < base; ++i) {
        //verifie que le nombre est bien dans la base demandée
        do {
            erreur=0;

//recuperer un des chiffres a trier
            printf("veuillez rentrer un nombre dans la base %d\n", base);
            scanf("%s", chiffretest);

            for (int i = 0; i < 5; ++i) {
                chiffretest[i]=toupper(chiffretest[i]);
            }

//parcours valeurs
            for (int k = 0; k < 5; ++k) {
                parcours=0;
                j=0;
                while (j<base){

// on triche un peu mais bon si ça marche
                    if(chiffretest[k]!=tableaubase[j] && tableaubase[j]!=0){
                        parcours=parcours+1;
                    } else if(tableaubase[j]==0 && chiffretest[k]!='0'){
                        parcours=parcours+1;
                    }
//printf("parcours : %d\n", parcours);
                    j=j+1;
                }

                if (parcours==base){
//printf("erreur %c n'est pas un chiffre compris dans la base\n  veuillez rentrer une valeur dans la base %d \n", chiffretest[k], base);
                    erreur=1;
                } else {
// printf("%c est un chiffre compris dans la base \n", chiffretest[k]);
                }
//printf("sortie de boucle \n");
            }

            if(erreur!=0){
                printf("erreur %s n'est pas un chiffre compris dans la base %d\nveuillez rentrer une valeur dans la base %d \n", chiffretest, base, base);
            } else {
                printf("%s est  un chiffre compris dans la base %d", chiffretest, base);
            }

        } while (erreur!=0);

    }

//verifie que le nombre est bien dans la base demandée
    do {
        erreur=0;

//recuperer un des chiffres a trier
        printf("veuillez rentrer un nombre dans la base %d\n", base);
        scanf("%s", chiffretest);

        for (int i = 0; i < 5; ++i) {
            chiffretest[i]=toupper(chiffretest[i]);
        }

//parcours valeurs
        for (int k = 0; k < 5; ++k) {
            parcours=0;
            j=0;
            while (j<base){

// on triche un peu mais bon si ça marche
                if(chiffretest[k]!=tableaubase[j] && tableaubase[j]!=0){
                    parcours=parcours+1;
                } else if(tableaubase[j]==0 && chiffretest[k]!='0'){
                    parcours=parcours+1;
                }
//printf("parcours : %d\n", parcours);
                j=j+1;
            }

            if (parcours==base){
//printf("erreur %c n'est pas un chiffre compris dans la base\n  veuillez rentrer une valeur dans la base %d \n", chiffretest[k], base);
                erreur=1;
            } else {
// printf("%c est un chiffre compris dans la base \n", chiffretest[k]);
            }
//printf("sortie de boucle \n");
        }

        if(erreur!=0){
            printf("erreur %s n'est pas un chiffre compris dans la base %d\nveuillez rentrer une valeur dans la base %d \n", chiffretest, base, base);
        } else {
            printf("%s est  un chiffre compris dans la base %d", chiffretest, base);
        }

    } while (erreur!=0);

    return base;

}





List init(char tableau[10][6], int nombreliste, List l){

    for (int i = 0; i < nombreliste; ++i) {
        l = ajout_fin(l, tableau[i]);
    }

    return l;
}

void afficher_fin(List l) {


    prod *tmp=l;
    /* Tant que l'on n'est pas au bout de la liste */
    while(tmp != NULL)
    {
        printf(" %s ", tmp->tableau);
        tmp = tmp->next;
    }

}