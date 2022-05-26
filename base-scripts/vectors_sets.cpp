#include <vector>
#include <set>
#include <iostream> // cin y cout

void vector_iterator(std::vector<int> &myvector)
{
    std::vector<int> myvector2;

    myvector.push_back(100);
    myvector.push_back(200);
    myvector.push_back(400);
    myvector.push_back(150);
    myvector.push_back(200);

    std::cout << "myvector contains:";
    for (auto &x : myvector)
    {
        std::cout << ' ' << x;
    }
    std::cout << std::endl;

    myvector2.push_back(myvector.front());
    myvector2.push_back(myvector.back());
    myvector2.push_back(300);

    std::cout << myvector.size() << std::endl;

    myvector2.erase(myvector2.begin());
    myvector2.erase(myvector2.end()-1);

    std::cout << myvector2.size() << std::endl;

    for (auto &x : myvector2)
    {
      std::cout << x << '\n';
    }
}


void set_setter(std::set<int> &myset)
{
    std::set<int> myset2;

    myset.insert(100);
    myset.insert(200);
    myset.insert(400);
    myset.insert(150);
    myset.insert(200);

    std::cout << "myset contains:";
    for (auto &x : myset)
    {
        std::cout << ' ' << x;
    }
    std::cout << std::endl;

    std::cout << "Last point: " << *--myset.end()<< std::endl;

    myset2.insert(*myset.begin());
    myset2.insert(*myset.end());
    myset2.insert(300);

    std::cout << myset.size() << std::endl;

    myset2.erase(*myset2.begin());
    myset2.erase(*--myset2.end());

    std::cout << myset2.size() << std::endl;

    for (auto &x : myset2)
    {
      std::cout << x << std::endl;
    }
    std::cout << std::endl;
}


int main(int argc, char const *argv[])
{
    std::vector<int> myvector;
    std::set<int> myset;

    vector_iterator(myvector);

    std::cout << '\n' << std::endl;

    set_setter(myset);


    return 0;
}
