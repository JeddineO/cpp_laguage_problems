#include <iostream>
#include "Cellule.cpp"
using namespace std;

class Pile
{
private:
    Cellule *tete;

public:
    Pile();
    Pile(const Pile &);
    ~Pile();
    void operator=(const Pile &);
    Pile operator+(const Pile &);
    void Empiler(int);
    void Depiler();
    void Afficher();
};