#include <algorithm> // find
#include <iostream>  // cin y cout
#include <cstdlib>   // rand() y srand(); abs()
#include <fstream>   // archivos
#include <string>    // substr()
#include <cstdio>    // printf()
#include <ctime>     // time()
#include <stack>
#include <vector>

#include "Objeto.hpp"

namespace gal
{

    // Aquí van las funciones de hpp, pero ya con código
    //CONSTRUCTORES
    Objeto::Objeto(std::string new_name)
      : name(new_name) { }


    Objeto::Objeto(std::string new_name, int val);
      : name(new_name), var(val) { }


    // Destructor
    Objeto::~Objeto()
    {
      std::cout << "Goodbye " << title; // Optional
    }


    void Objeto::set(const double &new_var, const double &new_var2)
    {
        // x = new_x;
        // y = new_y;
    }


    double Objeto::get() const { /* return var; */ }


    std::ostream &operator <<(std::ostream &output, const Objeto &o)
    {
        // output << " Abscisa  (x): " << p.x << "\n Ordenada (y): " << p.y << std::endl;

        return output;
    }

}
