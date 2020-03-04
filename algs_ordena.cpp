#include<iostream>
#include<cstring>
using namespace std;

class Ordenador {
public:
    void intercambia(int, int, int*);
    virtual void ordena(int*, int) = 0;
};

class Bubble : public Ordenador {
public:
    void ordena(int*, int);

};

class Insertion : public Ordenador {
public:
    void ordena(int*, int);

};

class Selection : public Ordenador {
public:
    void ordena(int*, int);

};

// A partir de aqui lleno los métodos

void Ordenador::intercambia(int i, int j, int* arreglo) {
    int temporal=arreglo[i];
    arreglo[i]=arreglo[j];
    arreglo[j]=temporal;
}

void Bubble::ordena(int* lista, int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam - 1; j++) {
            if (lista[j] > lista[j + 1])
                intercambia(j, j + 1, lista);
        }
    }
}

void Insertion::ordena(int* lista, int tam) {
    for (int i = 1; i < tam; i++) {
        for (int j = i; j >= 1; j--) {
            if (lista[j] < lista[j - 1])
                intercambia(j, j - 1, lista);
        }
    }
}

void Selection::ordena(int* lista, int tam) {
    int min;
    for (int i = 0; i < tam; i++) {
        min = i;
        for (int j = i; j < tam; j++) {
            if (lista[j] < lista[min])
                min = j;
        }
        intercambia(i, min, lista);
    }
}

int main(){
    Bubble o;
    int a[]={12, 4, 2, 9, 7, 8};

    o.ordena((int *)&a, 6);

    for(int i = 0; i < 6; i++){
        std::cout << a[i] << endl;
    }

    return 0;
}
