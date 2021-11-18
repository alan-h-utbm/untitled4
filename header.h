//
// Created by alanh on 18/11/2021.
//

#ifndef UNTITLED4_HEADER_H
#define UNTITLED4_HEADER_H

#include <stdlib.h>
#include <strings.h>
#include <stdlib.h>


typedef struct prod{
    int quantite;
    char tableau[6];
    struct prod *next;

}prod;

typedef prod *List;

#endif //UNTITLED4_HEADER_H
