#pragma once 
#include <iostream>
using namespace std;

#include "../models/Paquet.hpp"

class Vue {

    const Paquet& _paquet;

    public : 
        Vue(const Paquet& paquet);
        void AfficherLePaquet();
        void ToStringCouleur(Carte* carte);
        void ToStringValeur(Carte* carte);
};