#include <algorithm> // find
#include <iostream>  // cin y cout
#include <cstdlib>   // rand() y srand();
#include <fstream>   // archivos
#include <chrono>    // std::chrono::high_resolution_clock::now()
#include <string>    // substr(); to_string(para un numero muy grande)
#include <cstdio>    // printf()
#include <cmath>     // pow
#include <ctime>     // time() [para rands]
#include <stack>
#include <vector>


#include "Objeto.hpp"


int main(int argc, char const *argv[])
{
  std::cout << "\n\n\t\t-----INICIO PROGRAMA CICLO HAMILTONIANO-----\n\n" << std::endl;

  auto start = std::chrono::high_resolution_clock::now(); // Aqui se guarda el tiempo en ese momento

  /* code */

  auto stop = std::chrono::high_resolution_clock::now(); // Aqui se guarda el tiempo en ese momento
  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

  std::cout << "\n\n\t\t----PROGRAMA CICLO HAMILTONIANO FINALIZADO----\n" << std::endl;
  return 0;
}
