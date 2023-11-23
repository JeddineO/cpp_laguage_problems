#include <iostream>

class Cellule
{
public:
    int val;
    Cellule *svt;

    Cellule(int val)
    {
        this->val = val;
        this->svt = nullptr;
    }
};