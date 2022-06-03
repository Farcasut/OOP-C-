//
// Created by alexandru on 6/2/22.
//

#ifndef BIBLIOTECA_REVISTA_H
#define BIBLIOTECA_REVISTA_H
#include "Carte.h"
#include <iostream>
class Revista : public Carte{

    std::string titlu;
    int nrArticole;
public:
    Revista(std::string t, int nrArticole );
    std::string GetInfo() override;
};


#endif //BIBLIOTECA_REVISTA_H
