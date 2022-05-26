#include <iostream>  // cin y cout
#include <cstdlib>   // rand() y srand();
#include <ctime>     // time()

void nones(int arr[], int tam)
{
  for(int i = 0; i < tam; ++i)
  {
    if(i % 2 == 0)
    {
      arr[i] = 0;
    }
  }
}


int main(int argc, char const *argv[])
{
    int tam = 5;
    int arr[tam];

    srand((int)time(0));

    int i = 0;
    while(i++ < tam)
    {
    		int r = (rand() % 100) + 1; // (0 - 99) + 1 == (1 - 100)
        arr[i] = r;
        std::cout << r << '\n';
    }

    std::cout << "Tamaño: " << *(&arr + 1) - arr << std::endl;

    nones(arr, tam);

    int j = 0;
    while(j++ < tam)
    {
        std::cout << arr[j] << '\n';
    }

    return 0;
}
