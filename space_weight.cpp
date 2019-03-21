#include <iostream>

int main() {
  double w;
  int num;

  std::cout << "Weight on Earth: ";
  std::cin >> w;

  std::cout << "Planets:\n";
  std::cout << "1: Venus   2: Mars\n";
  std::cout << "3: Jupiter 4: Saturn\n";
  std::cout << "5: Uranus\n";
  std::cout << "Select the number of the planet: ";
  std::cin >> num;

  switch (num) {
    case 1:
      w *= .78;
      std::cout << "Your weight on Venus: ";
      break;
    case 2:
      w *= .39;
      std::cout << "Your weight on Mars: ";
      break;
    case 3:
      w *= 2.65;
      std::cout << "Your weight on Jupiter: ";
      break;
    case 4:
      w *= 1.17;
      std::cout << "Your weight on Saturn: ";
      break;
    case 5:
      w *= 1.05;
      std::cout << "Your weight on Uranus: ";
      break;
    default:
      std::cout << "Not valid.\n";
      return 1;
      break;
  }

  std::cout << w << ".\n";

  return 0;
}
