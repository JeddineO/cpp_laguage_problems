#include "Forme2D.cpp"

class Cercle : public Forme2D
{
private:
    float rayon;//Rayon du cercle
public:
    Cercle(float);
    Cercle(float, float, float);
    void afficher();
    double surface();
};
