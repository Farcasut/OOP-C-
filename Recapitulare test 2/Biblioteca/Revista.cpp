//
// Created by alexandru on 6/2/22.
//

#include "Revista.h"

Revista::Revista(std::string t, int nrArticole) {
this->titlu=t;
this->nrArticole=nrArticole;
}

std::string Revista::GetInfo() {
    return titlu;
}
