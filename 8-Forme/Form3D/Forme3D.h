#ifndef FORME3D_H
#define FORME3D_H

#include "../Forme/Forme.cpp"

class Forme3D : public Forme
{
protected:
    float z;

public:
    Forme3D(float, float, float);
    virtual void afficher() = 0;
    virtual double surface() = 0;
};

#endif
