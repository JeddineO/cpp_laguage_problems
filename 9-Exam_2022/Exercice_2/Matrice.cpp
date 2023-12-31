#include "Matrice.hpp"

Matrice::Matrice(int n, int m)
{
    this->m = m;
    this->n = n;
    this->line = new ligne[m];
    for (int i = 0; i < this->m; i++)
    {
        this->line[i] = new double[n];
    }
};

Matrice::Matrice(Matrice &M)
{
    this->m = M.m;
    this->n = M.n;
    this->line = new ligne[m];
    for (int i = 0; i < this->m; i++)
    {
        this->line[i] = new double[n];
    }
    for (int i = 0; i < this->m; i++)
    {
        for (int j = 0; j < this->n; j++)
        {
            this->line[i][j] = M.line[i][j];
        }
    }
};

Matrice &Matrice::operator=(Matrice &M)
{
    for (int i = 0; i < this->m; i++)
    {
        delete[] this->line[i];
    }
    delete[] this->line;
    this->m = M.m;
    this->n = M.n;
    this->line = new ligne[m];
    for (int i = 0; i < this->m; i++)
    {
        this->line[i] = new double[n];
    }
    for (int i = 0; i < this->m; i++)
    {
        for (int j = 0; j < this->n; j++)
        {
            this->line[i][j] = M.line[i][j];
        }
    }
    return *this;
};
void Matrice::Permuter()
{
    double tmp;
    for (int i = 0; i < this->m; i++)
    {
        for (int j = i + 1; j < this->n; j++)
        {
            tmp = this->line[i][j];
            this->line[i][j] = this->line[j][i];
            this->line[j][i] = tmp;
        }
    }
};

Matrice::~Matrice()
{
    for (int i = 0; i < this->m; i++)
    {
        delete[] this->line[i];
    }
    delete[] this->line;
}