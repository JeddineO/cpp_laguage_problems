#include <iostream>

using namespace std;

class Matrice
{
public:
    int n;
    int m;
    int **tab;

public:
    Matrice(int, int, int);
    Matrice(const Matrice &);
    ~Matrice();
    void saisie();
    void Afficher();
    Matrice operator+(const Matrice &);
    Matrice operator-(const Matrice &);
    Matrice operator*(const int);
    Matrice operator*(const Matrice &);
    void operator=(const Matrice &);
    Matrice operator^(const int n);
    Matrice pow2(const int n);
    Matrice pow(const int n);
};