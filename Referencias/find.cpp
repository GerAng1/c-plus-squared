#include <iostream> // cin y cout
#include <vector>

#include <algorithm> // find


int main(int argc, char const *argv[]) {
{
  std::vector<int> uno_al_cinco{1, 2, 3, 4, 5};
  std::vector<int> yaesta;

  yaesta.push_back(4);
  yaesta.push_back(2);
  yaesta.push_back(1);
  yaesta.push_back(3);
  yaesta.push_back(6);
  yaesta.push_back(5);


  for (int i : yaesta)
  {
    std::cout << i;
    if (!(std::find(uno_al_cinco.begin(), uno_al_cinco.end(), i) != uno_al_cinco.end()))
    {
      std::cout << ": no encontró" << '\n';
      break; // Ya no iterara sobre el 5
    } else
    {
      std::cout << ": encontró" << '\n';
    }
  }
}
