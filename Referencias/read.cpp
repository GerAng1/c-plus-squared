#include <iostream>
#include <fstream>


int main(int argc, char const *argv[])
{
    int num_lineas = 13;
    std::string lineas[num_lineas]; // Sabiendo previamente el num de lineas

    /* Para almacenar cada linea en un espacio de arreglo */
    // Abre archivo
    std::ifstream texto("texto.txt");

    int cont = 0;
    std::string linea;
    while (getline (texto, linea))
    {
        lineas[cont] = linea;
        cont++;
    }

    for(int i = 0; i < num_lineas; ++i)
    {
        std::cout << lineas[i] << ", ";
    }
    std::cout << std::endl;

    // Cierra el archivo
    texto.close();
    /* fin de Para almacenar cada linea en un espacio de arreglo */

    return 0;
}
