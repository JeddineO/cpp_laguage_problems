#include "Matrice.h"

Matrice::Matrice(int n = 0, int m = 0, int x = 1)
{
    this->n = n;
    this->m = m;
    tab = new int *[n];
    for (int i = 0; i < n; i++)
    {
        tab[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            if (i == j && x)
            {
                tab[i][j] = 1;
            }
            else
            {
                tab[i][j] = 0;
            }
        }
    }
}

Matrice::Matrice(const Matrice &M)
{
    this->n = M.n;
    this->m = M.m;
    this->tab = new int *[this->n];
    for (int i = 0; i < this->n; i++)
    {
        this->tab[i] = new int[this->m];
        for (int j = 0; j < this->m; j++)
            this->tab[i][j] = M.tab[i][j];
    }
}
void Matrice::saisie()
{
    for (int i = 0; i < this->n; i++)
        for (int j = 0; j < this->m; j++)
        {
            cout << "matrice[" << i << "][" << j << "] = ";
            cin >> this->tab[i][j];
        }
}
Matrice Matrice::operator+(const Matrice &M)
{
    if (this->n != M.n || this->m != M.m)
    {
        cout << "\nErreur d'Addition :Les deux matrice n'ont pas les memes dimensions";
        return *this;
    }

    Matrice R(this->n, this->m);
    for (int i = 0; i < this->n; i++)
    {
        for (int j = 0; j < this->m; j++)
        {
            R.tab[i][j] = this->tab[i][j] + M.tab[i][j];
        }
    }
    return R;
}

Matrice::~Matrice()
{
    for (int i = 0; i < this->n; i++)
        delete[] this->tab[i];
    delete[] this->tab;
}

Matrice Matrice::operator-(const Matrice &M)
{
    if (this->n != M.n || this->m != M.m)
    {
        cout << "\nErreur de soustraction :Les deux matrice n'ont pas les memes dimensions";
        return *this;
    }

    Matrice R(this->n, this->m);
    for (int i = 0; i < this->n; i++)
    {
        for (int j = 0; j < this->m; j++)
        {
            R.tab[i][j] = this->tab[i][j] - M.tab[i][j];
        }
    }
    return R;
}
Matrice Matrice::operator*(const int val)
{
    Matrice R(this->n, this->m);
    for (int i = 0; i < this->n; i++)
    {
        for (int j = 0; j < this->m; j++)
        {
            R.tab[i][j] = val * this->tab[i][j];
        }
    }
    return R;
}
Matrice Matrice::operator*(const Matrice &matrice)
{
    if (this->n != matrice.m)
    {
        cout << "\nErreur de multuplications :Les deux matrice n'ont pas les memes dimensions";
        return *this;
    }
    Matrice result(this->n, matrice.m, 0);
    for (int i = 0; i < this->n; i++)
        for (int j = 0; j < matrice.m; j++)
            for (int k = 0; k < this->m; k++)
                result.tab[i][j] += this->tab[i][k] * matrice.tab[k][j];
    return result;
}
Matrice Matrice::operator^(const int n)
{
    if (this->m != this->n)
    {
        cout << "\nErreur de multuplications :La matrice n'est pas carré";
        return *this;
    }
    Matrice result(this->n, this->m, 1);
    for (int i = 0; i < n; i++)
    {
        result = *this * result;
    }
    return result;
}
Matrice Matrice::pow(const int n)
{
    Matrice result(this->n, this->m, 1);
    if (n <= 1)
        return result;
    result = *this * this->pow(n - 1);
    return result;
}

Matrice Matrice::pow2(const int n)
{
    if (this->m != this->n)
    {
        cout << "\nErreur de multuplications :La matrice n'est pas carré";
        return *this;
    }
    Matrice result(this->n, this->m, 1);
    for (int i = 0; i < n / 2; i++)
    {
        result = *this * result;
    }
    if (n % 2)
        result = *this * result;
    return result;
}
void Matrice::operator=(const Matrice &M)
{
    for (int i = 0; i < this->n; i++)
        delete[] this->tab[i];
    delete[] this->tab;

    this->n = M.n;
    this->m = M.m;
    this->tab = new int *[this->n];
    for (int i = 0; i < this->n; i++)
    {
        this->tab[i] = new int[this->m];
        for (int j = 0; j < this->m; j++)
            this->tab[i][j] = M.tab[i][j];
    }
}
void Matrice::Afficher()
{
    for (int i = 0; i < this->n; i++)
    {
        cout << "\n";
        for (int j = 0; j < this->m; j++)
        {
            cout << tab[i][j] << "\t";
        }
    }
}
