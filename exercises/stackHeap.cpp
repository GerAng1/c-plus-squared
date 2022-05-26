#include<iostream>

void reserva(int** var, int size) {
    *var = new int[size];
    /*
     * Con el asterisco accedo al valor de var, que 
     * es la direccion de pointer, y ahora si podemos
     * asignar un espacio en el heap.
     */
}

void reservaPorReferencia(int*& var, int& size) {
    var = new int[size];
    size = 7;
    /*
     * Al recibir la direccion, se pasa por referencia
     * y se trata la variable como una variable y
     * los valores de las variables se copian en todas
     * las instancias.
     */
}

int main() {
    int* pointer; // crea un puntador vacio en el stack
    // pointer = new int[2];
    int size = 2; // tipo primitivo que se guarda en el stack
    
    reserva(&pointer, size); // la direccion de la dirrecion
    delete[] pointer;
    
    reservaPorReferencia(pointer, size);
     
    pointer[0] = 1;
    pointer[1] = 22;
    
    std::cout << pointer[0];
    std::cout << pointer[1];
}

