#pragma once
#include <iostream>
#include "../models/Paquet.hpp"
#include "../views/Vue.hpp"

class Controleur
{
    Vue _vue;
    Paquet _paquet;

    public : 
    Controleur() : _vue(Vue(_paquet)) {};
    void afficheCommencement()
    {
        _vue.AfficherLePaquet();
        _paquet.MelangerPaquet();
        _vue.AfficherLePaquet();
    }
};