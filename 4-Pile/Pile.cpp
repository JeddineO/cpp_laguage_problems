#include "Pile.h"

Pile::Pile()
{
    this->tete = nullptr;
}

Pile::Pile(const Pile &P)
{
    Cellule *tmp = P.tete;
    Pile tmp2;
    while (tmp != nullptr)
    {
        tmp2.Empiler(tmp->val);
        tmp = tmp->svt;
    }
    while (tmp2.tete)
    {
        this->Empiler(tmp2.tete->val);
        tmp2.Depiler();
    }
}

void Pile::operator=(const Pile &P)
{
    while (this->tete)
        this->Depiler();

    Cellule *tmp = P.tete;
    Pile *tmp2 = new Pile();

    while (tmp != nullptr)
    {
        tmp2->Empiler(tmp->val);
        tmp = tmp->svt;
    }
    while (tmp2->tete != nullptr)
    {
        this->Empiler(tmp2->tete->val);
        tmp2->Depiler();
    }
}

Pile::~Pile()
{
    while (this->tete)
        this->Depiler();
}

void Pile::Empiler(int val)
{
    Cellule *NE = new Cellule(val);
    NE->svt = this->tete;
    this->tete = NE;
}
void Pile::Depiler()
{
    Cellule *tmp = this->tete;
    this->tete = tmp->svt;
    free(tmp);
}

Pile Pile::operator+(const Pile &P)
{
    Pile result;
    Cellule *tmp = this->tete;
    while (tmp != nullptr)
    {
        result.Empiler(tmp->val);
        tmp = tmp->svt;
    }
    return result;
}

void Pile::Afficher()
{
    if (!this->tete)
        cout << "La pile est vide !!";
    else
    {
        Cellule *tmp = this->tete;
        while (tmp != nullptr)
        {
            cout << tmp->val << "\t";
            tmp = tmp->svt;
        }
    }
}
