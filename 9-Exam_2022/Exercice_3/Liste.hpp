struct Noeud
{
    int donnee;
    Noeud *Prochain;
};

class Liste
{
private:
    Noeud *tete;

public:
    Liste();
    ~Liste();
    void push(int data);
};

