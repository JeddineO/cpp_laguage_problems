#include "Forme.cpp"

class Forme2D : public Forme
{
public:
    Forme2D(float x = 0, float y = 0);
    virtual void afficher();
    virtual double surface();
};
