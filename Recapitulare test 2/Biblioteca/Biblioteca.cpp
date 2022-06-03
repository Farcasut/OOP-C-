//
// Created by alexandru on 6/2/22.
//

#include "Biblioteca.h"

Biblioteca::Biblioteca() {
    count=0;
}


Biblioteca::~Biblioteca() {

    for(int i=0; i<count;i++)
    {
        delete carti[i];
    }
}

Biblioteca& operator+=(Biblioteca &a, Carte *p) {
    a.carti[a.count]=p;
    a.count++;
    return a;
}

Carte** Biblioteca::begin() {
    return &carti[0];
}
Carte** Biblioteca::end() {
    return &carti[count];
}