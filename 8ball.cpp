// Numeros aleatorios, rand c++
#include <iostream>
#include <stdlib.h> // Aqui esta el rand

int main() {
  srand(time(NULL)); // 'Seed' para que el rand cambie
  int answer = rand() % 8; // Modulo 8 da un numero entre 0 y 7 (8 numeros)

  std::cout << "MAGIC 🎱 SAYS: \n\n";

  if (answer == 0)
    std::cout << "It is certain.\n";
  else if (answer == 1)
    std::cout << "Reply hazy, try again.\n";
  else if (answer == 2)
    std::cout << "Better not tell you now.\n";
  else if (answer == 3)
    std::cout << "Outlook not so good.\n";
  else if (answer == 4)
    std::cout << "Concentrate and ask again.\n";
  else if (answer == 5)
    std::cout << "Most likely.\n";
  else if (answer == 6)
    std::cout << "Ask again later.\n";
  else if (answer == 7)
    std::cout << "My sources say no.\n";
  else
    std::cout << "Cannot predict now.\n";

  return 0;
}
