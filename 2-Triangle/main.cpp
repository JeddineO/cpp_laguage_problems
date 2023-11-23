#include "Triangle.cpp"

int main()
{
    Point P1(1, 0, 0), P2(0, 1, 0), P3(0, 0, 1);

    Triangle MonTriangle(P1, P2, P3);
    MonTriangle.show();

    return 0;
}
