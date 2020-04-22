//
//  Elemento.hpp
//  Algoritmos Ávidos
//
//  Created by Vicente Cubells Nonell on 27/03/20.
//  Copyright © 2020 Vicente Cubells Nonell. All rights reserved.
//

#ifndef Elemento_hpp
#define Elemento_hpp

#include <iostream>

namespace vcn {


    class Elemento {
        std::string info;
        int peso;
        float beneficio;

    public:

        /* Constructores */
        Elemento();
        Elemento(std::string _info, int _peso, float _beneficio);


        /* Destructor */
        virtual ~Elemento();

        std::string getInfo() const;
        void setInfo(const std::string & value);

        float getBeneficio() const;
        void setBeneficio(const float & value);

        int  getPeso() const;
        void setPeso(const int & value);

        friend std::ostream & operator << (std::ostream & os, const Elemento  & e); //QUE ES ESTO???
    };

}

#endif /* Elemento_hpp */
