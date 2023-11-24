#include "Carre.cpp"
#include "Rectangle.cpp"
// #include "Cercle.cpp"
// #include "Cube.cpp"

int main()
{
    Forme *list[6];

    list[0] = new Rectangle(5, 8);
    //list[1] = new Carre(6);

    list[0]->afficher();
    //list[1]->afficher();
    return 0;
}