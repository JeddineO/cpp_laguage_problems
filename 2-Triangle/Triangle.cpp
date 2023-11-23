#include "Triangle.h"

Triangle::Triangle(Point A1, Point B1, Point C1) : A(A1), B(B1), C(C1) {};

void Triangle::show()
{
    cout << "les coordonnées du triangle sont :\n";
    A.Afficher();
    B.Afficher();
    C.Afficher();
    cout << endl;
};

