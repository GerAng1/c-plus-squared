//
//  main.cpp
//  Algoritmos Ávidos
//
//  Created by Vicente Cubells Nonell on 27/03/20.
//  Copyright © 2020 Vicente Cubells Nonell. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Elemento.hpp"
#include "Mochila.hpp"

/* Función para ordenar por peso ascendentemente */
bool asc_peso (vcn::Elemento i, vcn::Elemento j)
{
    return (i.getPeso() < j.getPeso());
}

/* Función para ordenar por beneficio descendentemente */
bool desc_beneficio (vcn::Elemento i, vcn::Elemento j)
{
    return (i.getBeneficio() > j.getBeneficio());
}

int main(int argc, const char * argv[]) {
    
    /*  Definir número de elementos */
    const int N = 10;
    
    /* Establecer semilla del generador */
    srand((unsigned int) time(nullptr));
    
    /* Definir el vector de elementos */
    std::vector<vcn::Elemento> elementos;
    
    /* Llenar el vector de elementos disponibles con valores aleatorios */
    for (int i = 0; i < N; ++i) {
        std::string nombre = "Elemento " + std::to_string(i);
        
        vcn::Elemento  e(nombre , rand() % 10 + 1, (rand() % 20)*2.0);
        
        elementos.push_back(e);
    }
    
    /* Ordenar los elementos por peso
     Si quisieran ordenar la mochila por beneficio, solo tienen que cambiar
     la función asc_peso por la función desc_beneficio
    */
    sort(elementos.begin(), elementos.end(), asc_peso);
    
    /* Crear la mochila con un peso máximo */
    vcn::Mochila mochila(40);
    
    /* Llenar la mochila por peso */
    mochila.llenar(elementos);
    
    /* Mostrar el contenido de la mochila */
    std::cout << mochila;

    return 0;
}
