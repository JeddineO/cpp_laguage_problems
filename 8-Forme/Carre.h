#include "Forme2D.cpp"

class Carre : public Forme2D
{
protected:
    float cote;

public:
    Carre(float);
    void afficher();
    double surface();
};