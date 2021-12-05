#include "CarteL.hpp"

CarteL :: CarteL(){}

CarteL :: CarteL(Couleur _couleur,Valeur _valeur ) : Carte (_couleur , _valeur){
    this -> suivante = nullptr;
}

CarteL :: ~CarteL(){}
