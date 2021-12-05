#include <iostream>
#include "Carte.hpp"
using namespace std;

Carte::Carte(){}
Carte :: ~Carte(){}

Carte :: Carte(Couleur _couleur,Valeur _value){
    this->m_couleur = _couleur;
    this->m_valeur = _value;
}

void Carte::SetCouleur(Couleur couleur)
{
    this->m_couleur = couleur;
}

Couleur Carte::GetCouleur()
{
    return m_couleur;
}

Valeur Carte::GetValeur()
{
    return m_valeur;
}

void Carte::SetValeur(Valeur value)
{
    this->m_valeur = value;
}

void Carte :: ToString()
{
    cout<< this->m_valeur + "de" + this->m_couleur<< endl;
}