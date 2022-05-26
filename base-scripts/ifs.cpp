#include <iostream> // cin; cout

int getans()
{
    int num = 5;

    return num <= 5 ? -1 : 1;
}


int main(int argc, char const *argv[])
{
    std::cout << getans() << std::endl;


    return 0;
}
