#ifndef FORME2D_HPP
#define FORME2D_HPP

#include "../Forme/Forme.cpp"

class Forme2D : public Forme
{
public:
    Forme2D(float, float);
    virtual void afficher() = 0;
    virtual double surface() = 0;
};

#endif
