#include <iostream>

class Chaine
{
private:
    char *m_Chaine;
    int m_Size;

public:
    Chaine();
    Chaine(const char *);
    Chaine(const Chaine &);
    Chaine &operator=(const Chaine &);
    friend std::ostream &operator<<(std::ostream &, const Chaine &);
    ~Chaine();
};
