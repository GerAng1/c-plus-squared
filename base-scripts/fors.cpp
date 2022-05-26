#include <iostream> // cin y cout
#include <vector>   // vector


template <class T>
void for1(const std::vector<T> &list)
{
    std::cout << "for (int i : lista) itera con contenidos del vector" << '\n';
    for (int i : list)
    {
        std::cout << i << '\n'; // ASI YA ESTAS ACCEDIENDO A LOS DATOS
    }
    std::cout << std::endl;
}


template <class T>
void for2(const std::vector<T> &list)
{
    std::cout << "for (int i = 0; i < lista.size(); ++i) itera de 0 a tam del vector:" << '\n';
    int i;
    for (i = 0; i < list.size(); ++i)
    {
      std::cout << list[i]; // ASI YA ESTAS ACCEDIENDO A LOS DATOS
    }
    std::cout << std::endl;

    std::cout << "Se imprimen los numeros que quedan hasta el 10:" << '\n';
    for ( ; i < 10; ++i) // LE ESTOY SIGUIENDO DE DONDE SE QUEDO EL ITERADOR PASADO
    {
      std::cout << i << '\n';
    }
}


template <class T>
void for3(const std::vector<T> &list)
{
    for (int i = 0; i < 3; i++)
    {
      std::cout << "Hola" << i << '\n';
    }
    // std::cout << i << '\n'; ESTO MARCA ERROR
    for (int i = 0; i < 5; i++)
    {
      std::cout << "Adios" << i << '\n';
    }
    // std::cout << i << '\n'; ESTO MARCA ERROR
}


template <class T>
void for4(const std::vector<T> &list)
{
    int i;
    for (i = 0; i < 3; i++)
    {
      std::cout << "Hola" << i << '\n';
    }
    std::cout << i << '\n'; // ESTO NO MARCA ERROR
    for (i = 0; i < 5; i++)
    {
      std::cout << "Adios" << i << '\n';
    }
    std::cout << i << '\n'; // ESTO NO MARCA ERROR
}


int main(int argc, char const *argv[])
{
    std::vector<int> lista;

    lista.push_back(1);
    lista.push_back(3);
    lista.push_back(5);

    // for (int i : lista)
    for1(lista);

    // for (int i = 0; i < lista.size(); ++i)
    // CONTINUIDAD
    // for ( ; i < 10; ++i)
    for2(lista);

    // MIDE SCOPE
    // DOS for (int i = 0;)
    for3(lista);


    // MIDE SCOPE
    // DOS for (int i = 0;)
    for4(lista);


  return 0;
}
