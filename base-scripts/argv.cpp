#include <iostream> // cout; cin
#include <cstdlib>  // atoi, atof
#include <string>   // to_string (para un numero muy grande)
#include <cmath>    // pow


int main(int argc, char const *argv[])
{
    double entropy_bits, length;

    entropy_bits = std::atof(argv[1]);

    std::cout << std::to_string(pow(2, entropy_bits - 1)/31536000000) << " años en romper." << std::endl;

    // Regresara numero de elementos pasados (./a.out cuenta como el primero)
    std::cout << argc << std::endl;

    return 0;
}
