#include "Chaine.hpp"
#include <string.h>
#include <iostream>
using namespace std;

Chaine::Chaine()
{
    this->m_Chaine = nullptr;
    this->m_Size = 0;
}

Chaine::Chaine(const char *chr)
{
    this->m_Size = strlen(chr);
    this->m_Chaine = new char[this->m_Size + 1];
    for (int i = 0; i < this->m_Size; i++)
    {
        this->m_Chaine[i] = chr[i];
    }
    this->m_Chaine[this->m_Size] = '\0'; // Add null terminator
}

Chaine::Chaine(const Chaine &chr)
{
    this->m_Size = chr.m_Size;
    this->m_Chaine = new char[this->m_Size + 1];
    for (int i = 0; i < this->m_Size; i++)
    {
        this->m_Chaine[i] = chr.m_Chaine[i];
    }
    this->m_Chaine[this->m_Size] = '\0'; // Add null terminator
}

Chaine &Chaine::operator=(const Chaine &chr)
{
    if (this != &chr) // Check for self-assignment
    {
        delete[] this->m_Chaine; // Delete the old content

        this->m_Size = chr.m_Size;
        this->m_Chaine = new char[this->m_Size + 1];
        for (int i = 0; i < this->m_Size; i++)
        {
            this->m_Chaine[i] = chr.m_Chaine[i];
        }
        this->m_Chaine[this->m_Size] = '\0';
    }
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Chaine &chaine)
{
    for (int i = 0; i < chaine.m_Size; i++)
    {
        out << chaine.m_Chaine[i];
    }
    return out;
}

Chaine::~Chaine()
{
    delete[] this->m_Chaine;
}
