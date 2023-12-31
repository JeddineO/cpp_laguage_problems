#include "Liste.hpp"


Liste::Liste()
{
    this->tete = nullptr;
}

Liste::~Liste()
{
    delete this->tete; 
}

void Liste::push(int data)
{
    Noeud *ne = new Noeud; 
    ne->donnee = data;
    ne->Prochain = this->tete;
    this->tete = ne;
}
