#pragma once
#include <iostream>
using namespace std;

#include "enum.hpp"


class Carte 
{
    public:
        Carte();
        Carte(Couleur _couleur,Valeur _valeur);
        ~Carte();
        Couleur GetCouleur();
        void SetCouleur(Couleur couleur);
        Valeur GetValeur();
        void SetValeur(Valeur valeur);
        void ToString();
    
        protected :
        Couleur m_couleur;
        Valeur m_valeur;
};

