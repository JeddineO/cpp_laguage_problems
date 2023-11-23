#include <iostream>

#include "Vecteur3D.cpp"

using namespace std;

int main()
{
  Vecteur3D v1(1,2,3);
  v1.print();
  Vecteur3D v2(4, 3, 5);
  v2.print();

  cout << "*********" << endl;

  cout << "Addition : " << endl;
  Vecteur3D v3 = v1+v2;
  v3.print();

  cout << "Multiplication : " << endl;
  Vecteur3D v4 = v3 * 5;
  v4.print();

  cout << "Produit Scalaire" << endl;
  Vecteur3D v5 = v2 * v3;
  v5.print();

  cout << "Vectorielle : " << endl;
  Vecteur3D v6 = v2.vectorielle(v4);
  v6.print();

  cout << "Norme : " << v1.norme() << endl;
  return 0;
}