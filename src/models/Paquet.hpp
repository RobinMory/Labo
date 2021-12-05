#pragma once 
#include "CarteL.hpp"
#include <iostream>


class Paquet
{
   public: 
   Paquet();
   ~Paquet();
   void SetCarteFin(CarteL* linkedcarte);
   CarteL* getDebut() const;
   void MelangerPaquet();
   CarteL* getCarteByNum(int NumCarte);

   protected :
   CarteL* debut = nullptr;
};