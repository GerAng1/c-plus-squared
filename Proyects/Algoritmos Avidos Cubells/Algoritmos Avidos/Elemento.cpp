//
//  Elemento.cpp
//  Algoritmos Ávidos
//
//  Created by Vicente Cubells Nonell on 27/03/20.
//  Copyright © 2020 Vicente Cubells Nonell. All rights reserved.
//

#include "Elemento.hpp"

namespace vcn {

/* Constructores */
Elemento::Elemento() { }
Elemento::Elemento(std::string _info, int _peso, float _beneficio)
: info (_info), peso(_peso), beneficio (_beneficio) { }


/* Destructor */
Elemento::~Elemento(){};

std::string Elemento::getInfo() const { return info; }
void Elemento::setInfo(const std::string & value) { info = value; }

float Elemento::getBeneficio() const { return beneficio; }
void Elemento::setBeneficio(const float & value) { beneficio = value; }

int  Elemento::getPeso() const { return peso; }
void Elemento::setPeso(const int & value) { peso = value; }

std::ostream & operator << (std::ostream & os, const Elemento & e)
{
    os << "Info     : " << e.info << std::endl;
    os << "Peso     : " << e.peso << std::endl;
    os << "Beneficio: " << e.beneficio << std::endl;
    
    return os;
}

}
