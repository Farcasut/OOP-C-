//
// Created by alexandru on 6/2/22.
//

#include "Roman.h"
Roman::Roman(std::string numem, std::string autor) {
    this->autor=autor;
this->nume=numem;

}

std::string Roman::GetInfo() {
    return nume+" de "+autor;
}