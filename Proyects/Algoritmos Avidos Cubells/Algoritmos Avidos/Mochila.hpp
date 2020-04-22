//
//  Mochila.hpp
//  Algoritmos Ávidos
//
//  Created by Vicente Cubells Nonell on 27/03/20.
//  Copyright © 2020 Vicente Cubells Nonell. All rights reserved.
//

#ifndef Mochila_hpp
#define Mochila_hpp

#include <iostream>
#include <vector>
#include "Elemento.hpp"

namespace vcn {

    class Mochila {
        std::vector<Elemento> solucion;
        int peso;
        int ocupacion = 0;
        
    public:
        
        /* Constructores */
        Mochila(int _peso);
        
        /* Destructor */
        virtual ~Mochila();
        
        std::vector<Elemento> getSolucion() const;
        
        int  getPeso() const;
        void setPeso(const int & value);
        
        void llenar(std::vector<Elemento> elementos);
        
        friend std::ostream & operator << (std::ostream & os, const Mochila  & e);
    };
    
}

#endif /* Mochila_hpp */
