
class Matrice
{
private:
    typedef double *ligne;
    ligne *line;
    int n;
    int m;

public:
    Matrice(int, int);
    Matrice(Matrice &);
    Matrice &operator=(Matrice &);
    void Permuter();
    ~Matrice();
};