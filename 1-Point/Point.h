#include <iostream>

using namespace std;

class Point
{
private:
    int x;
    int y;
    int z;

public:
    Point(int, int, int);
    void setX(int x);
    int getX();
    void setY(int y);
    int getY();
    void setZ(int z);
    int getZ();
    void saisie();
    void Afficher();
    void Deplacer(int x, int y, int z);
    void Echelle(float, float);
    float Distance(const Point &);
    Point operator+(const Point &);
    void operator=(const Point &);
};