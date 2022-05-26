#include <iostream>
#include <cstring>

/*class ex2 {
public:
    int* a;
    ex2() {};
    ~ex2() {delete a;};
};*/

class ex2 {
public:
    int* a = new int;
    ex2() {};
    ~ex2() {
      delete a;
    };
};

// ------------------------------
class ex1
{
public:
    char* A;
    ex1(const char*);
    void setA(const char*);
    ~ex1();

};

ex1 :: ex1(const char* b) {
    A = (char*)malloc(strlen(b) + 1);
    strcpy(A, b);
}

ex1 :: ~ex1(){
  free(A);
}

void ex1 :: setA(const char* b) {
    free(A);
    A = (char*)malloc(strlen(b) + 1);
    strcpy(A, b);
}

// ------------------------------
class ex3
{
public:
    int* a = new int;
    ex3() { };
    ~ex3() { delete a; };
};

class ex4: ex3
{
public:
    int* a = new int;
    ex4() { };
    ~ex4() { delete a; };
};

int main()
{
    ex4* e1;
    ex3* e2;
    e1 = new ex4;
    e2 = new ex3;

    e1->~ex4();
    e2->~ex3();
}
