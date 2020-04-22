//
//  Mochila.cpp
//  Algoritmos Ávidos
//
//  Created by Vicente Cubells Nonell on 27/03/20.
//  Copyright © 2020 Vicente Cubells Nonell. All rights reserved.
//

#include "Mochila.hpp"

namespace vcn {



/* Constructores */
Mochila::Mochila(int _peso) : peso(_peso)
{
    
}

/* Destructor */
Mochila::~Mochila()
{
    
}

std::vector<Elemento> Mochila::getSolucion() const
{
    return solucion;
}

int  Mochila::getPeso() const { return peso; }

void Mochila::setPeso(const int & value) { peso = value; }

void Mochila::llenar(std::vector<Elemento> elementos)
{
    float peso_en_curso = 0;

    for (Elemento e : elementos) {
        
        int temp = peso_en_curso + e.getPeso();
        
        if (temp <= peso) {
            solucion.push_back(e);
            peso_en_curso = temp;
        }
        else {
            break;
        }
    }
    
    ocupacion = peso_en_curso;
}

std::ostream & operator << (std::ostream & os, const Mochila  & m)
{
    
    os << "--- Contenido de la mochila ---" << std::endl;
    
    std::copy(m.solucion.begin(), m.solucion.end(), std::ostream_iterator<Elemento>(os, "---\n"));
    
    os << "Peso ocupado = " << m.ocupacion << std::endl;
    
    return os;
}


}
