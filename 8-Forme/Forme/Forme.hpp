#ifndef FORME_HPP
#define FORME_HPP

class Forme
{
protected:
    // Cordonnées de centre de la forme
    float x;
    float y;

public:
    Forme(float, float);
    virtual void afficher() = 0;
    virtual double surface() = 0;
};

#endif