#ifndef VECTEUR3D_H
#define VECTEUR3D_H

class Vecteur3D
{
private:
  int i, j, k;

public:
  Vecteur3D(int i, int j, int k);
  void print();
  Vecteur3D operator+(const Vecteur3D &);
  Vecteur3D operator*(const int);
  Vecteur3D operator*(const Vecteur3D &);
  Vecteur3D vectorielle(const Vecteur3D &);
  float norme();
};

#endif