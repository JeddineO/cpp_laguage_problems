#include <iostream>
using namespace std;
#include "../1-Point/Point.cpp"

class Triangle
{
private:
    Point A;
    Point B;
    Point C;

public:
    Triangle(Point A1, Point B1, Point C1);
    void show();
};
