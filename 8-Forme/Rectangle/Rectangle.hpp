#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "../Form2D/Forme2D.cpp"

class Rectangle : public Forme2D
{
private:
    float longueur;
    float largeur;

public:
    Rectangle(float, float);
    Rectangle(float, float, float, float);
    void afficher();
    double surface();
};

#endif