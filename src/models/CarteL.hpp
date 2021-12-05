#pragma once
#include <iostream>
using namespace std;

#include "Carte.hpp"



class CarteL : public Carte
{
    public:
        CarteL();
        ~CarteL();
        CarteL(Couleur _couleur,Valeur _valeur ); 
        CarteL* suivante;
};

