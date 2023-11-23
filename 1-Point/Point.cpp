#include <math.h>
#include "Point.h"

Point::Point(int x = 0, int y = 0, int z = 0)
{
    this->x = x;
    this->y = y;
    this->z = z;
};

void Point::setX(int x)
{
    this->x = x;
};

int Point::getX()
{
    return x;
};

void Point::setY(int y)
{
    this->y = y;
}

int Point::getY()
{
    return y;
}

void Point::setZ(int z)
{
    this->z = z;
}

int Point::getZ()
{
    return z;
}

void Point::saisie()
{
    cout << "x = ";
    cin >> this->x;
    cout << "y = ";
    cin >> this->y;
    cout << "z = ";
    cin >> this->z;
}

void Point::Afficher()
{
    cout << "la position de votre point est : (" << x << ", " << y << ", " << z << ")\n";
}

void Point::Deplacer(int x, int y, int z)
{
    this->x += x;
    this->y += y;
    this->z += z;
}
void Point::Echelle(float x, float y)
{
    this->x *= x;
    this->y *= y;
}
float Point::Distance(const Point &X)
{
    return sqrt(pow(this->x - X.x, 2) + pow(this->y - X.y, 2) + pow(this->z - X.z, 2));
}

Point Point::operator+(const Point &X)
{
    Point P;
    P.x = this->x + X.x;
    P.y = this->y + X.y;
    return P;
}

void Point::operator=(const Point &X)
{
    this->x = X.x;
    this->y = X.y;
    this->z = X.z;
}
