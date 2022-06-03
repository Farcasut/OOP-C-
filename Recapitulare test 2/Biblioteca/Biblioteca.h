//
// Created by alexandru on 6/2/22.
//

#ifndef BIBLIOTECA_BIBLIOTECA_H
#define BIBLIOTECA_BIBLIOTECA_H
#include "Roman.h"
#include "Revista.h"
# include <iostream>
class Biblioteca {
    Carte *carti[100];
    int count;

public:
    friend Biblioteca& operator+=(Biblioteca&a, Carte* p);
    Carte** begin();
    Carte** end();
    operator int()
    {
        return count;
    }
    void PrintFilter(bool (*func)(Carte*p))
    {
            for(int i=0; i<count;i++)
            {
                if(func(carti[i]))
                {
                  std::cout << carti[i]->GetInfo()<<std::endl;
                }
            }
    }
    Biblioteca();
    ~Biblioteca();



};


#endif //BIBLIOTECA_BIBLIOTECA_H
