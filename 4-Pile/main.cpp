#include <iostream>
#include "Pile.cpp"

int main()
{

    Pile pile1;
    pile1.Empiler(10);
    pile1.Empiler(20);
    pile1.Empiler(30);
    pile1.Depiler();

    Pile pile2 = pile1;

    pile1.Afficher();
    cout << "\n";
    pile2.Afficher();

    Pile pile3;
    pile3 = pile1 + pile1;
    cout << "\n";
    pile3.Afficher();

    return 0;
}
