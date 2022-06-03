//
// Created by alexandru on 6/2/22.
//

#ifndef BIBLIOTECA_ROMAN_H
#define BIBLIOTECA_ROMAN_H
#include "Carte.h"

class Roman : public Carte{
std::string autor;
std::string nume;
public:
    Roman(std::string numem, std::string autor);
    std::string GetInfo() override;
};


#endif //BIBLIOTECA_ROMAN_H
