#include "Point.cpp"

int main()
{
    Point P1;
    P1.saisie();
    cout << "\nPoint 1:";
    P1.Afficher();
    cout << "\nDeplacement de Point 1:";
    P1.Deplacer(1, 2, 3);
    P1.Afficher();
    cout << "\nPoint 2:";
    Point P2(P1);
    P2.Afficher();
    Point P3 = P1;
    cout << "\nPoint 3:";
    P3.Afficher();
    return 0;
}
