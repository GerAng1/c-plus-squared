// EJEMPLO QUE OBTIENE EL TIEMPO EN HACER OPERACIONES DE PUNTO 'A' A 'B'
#include <iostream> // cin y cout
#include <cstdlib>  // rand() y srand()
#include <ctime>    // time() [para rands]
#include <chrono>   // std::chrono::high_resolution_clock::now()


int main ()
{
    std::cout << "\n\n\n\n\t\t-----INICIO PROGRAMA-----\n\n\n\n" << std:endl;

    float x,y;

    auto start = std::chrono::high_resolution_clock::now(); // Aqui se guarda el tiempo en ese momento

    srand((int)time(0));
  	int i = 0;

    while(i++ < 10000)
    {
  		  int r = (rand() % 1000) + 1; // (0 - 999) + 1 == (1 - 1000)
  	}

    auto stop = std::chrono::high_resolution_clock::now(); // Aqui se guarda el tiempo en ese momento
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    std::cout << "Generar 10,000 numeros aleatorios tomó: ";
    std::cout << duration.count() << " microsegundos.\n" << std::endl;
    std::cout << "\n\n\t\t-----FIN PROGRAMA-----\n\n";
    return 0;
}
