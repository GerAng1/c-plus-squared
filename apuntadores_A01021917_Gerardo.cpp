#include <iostream>

/* Gerardo Anglada de Landa
 * A01021917
 */

int main() {
  int integers[] = {10,20,30,40,50,60,70,80,90,100, 110, 120, 130};
  int* pointer;
  int n = 0;
  pointer = integers;

  n = *pointer;       // a) El valor de n es __10____________
  std::cout << "a" << n << "\n";
  n = *(pointer);     // b) El valor de n es __10____________
  std::cout << "b" << n << "\n";
  n = *(pointer + 1); // c) El valor de n es __20____________
  std::cout << "c" << n << "\n";
  n = *pointer++;     // d) El valor de n es __10______________
  std::cout << "d" << n << "\n";
  n = *(pointer++);   // e) El valor de n es __30__x_20_________
  std::cout << "e" << n << "\n";
  n = *pointer+=1;    // f) El valor de n es __31______________
  std::cout << "f" << n << "\n";
  n = *++pointer;     // g) El valor de n es __40______________
  std::cout << "g" << n << "\n";
  n = (*pointer+1);   // h) El valor de n es __41____________
  std::cout << "h" << n << "\n";
  n = *(++pointer);   // i) El valor de n es __50______________
  std::cout << "i" << n << "\n";
  n = (*pointer)+1;   // j) El valor de n es __51______________
  std::cout << "j" << n << "\n";
  n = *pointer;       // k) El valor de n es __50______________
  std::cout << "k" << n << "\n";
  n = *(pointer+1);   // l) El valor de n es __60______________
  std::cout << "l" << n << "\n";
  n = *(pointer++);   // m) El valor de n es __60__x_50_________
  std::cout << "m" << n << "\n";
  n = *pointer+1;     // n) El valor de n es __61_______________
  std::cout << "n" << n << "\n";
  n = *pointer++;     // ñ) El valor de n es __60_______________
  std::cout << "ñ" << n << "\n";
  n = *pointer;       // o) El valor de n es __70_______________
  std::cout << "o" << n << "\n";
}
