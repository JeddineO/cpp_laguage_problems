#include <iostream>
#include <math.h>

#include "Vecteur3D.h"

using namespace std;

Vecteur3D::Vecteur3D(int i = 0, int j = 0, int k =0)
{
  this->i = i;
  this->j = j;
  this->k = k;
}

void Vecteur3D::print()
{
  cout << "V = " << this->i << "i + " << this->j << "j + " << this->k << "k" << endl;
}

Vecteur3D Vecteur3D::operator+(const Vecteur3D &v)
{
  return Vecteur3D (this->i + v.i, this->j + v.j, this->k + v.k);
}

Vecteur3D Vecteur3D::operator*(const int x)
{
  return Vecteur3D (this->i * x, this->j * x, this->k * x);
}

Vecteur3D Vecteur3D::operator*(const Vecteur3D &v)
{
  return Vecteur3D(this->i * v.i, this->j * v.j, this->k * v.k);
}

Vecteur3D Vecteur3D::vectorielle(const Vecteur3D &v)
{
  return Vecteur3D((this->j * v.k - this->k * v.j), (this->k * v.i - this->i * v.k), (this->i * v.j - this->j * v.i));
}

float Vecteur3D::norme()
{
  return ((float)sqrt(pow(this->i, 2) + pow(this->j, 2) + pow(this->k, 2)));
}