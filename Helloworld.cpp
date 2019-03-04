/* Esqueleto de una clase de c++,
 * se pone la clase, y el main se
 * coloca afuera de la clase.
 * se coloca ; al final de la clase
 * antes del main.
*/

#include<iostream>

class HelloWorld { //clase no se tiene que llamar como archivo
public:
  int suma(int a, int b){
    //codigo aqui
  }

protected:

private:

}; // importante el semicolon

//se pone afuera de la clase para asegurar que no llames muchos main
int main() {
  std::cout << "hola";

  return 0;
}
