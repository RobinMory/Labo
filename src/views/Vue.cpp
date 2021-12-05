#include "Vue.hpp"

Vue :: Vue( const Paquet& paquet) : _paquet(paquet){}

void Vue ::AfficherLePaquet()
{
    cout<<"---------Voici le paquet---------"<<endl;
    CarteL* mycarte =_paquet.getDebut();
    while (mycarte != NULL)
    {
        ToStringValeur(mycarte);ToStringCouleur(mycarte);
        mycarte = mycarte->suivante;
    }
}


void Vue :: ToStringCouleur(Carte* carte)
{
    switch(carte->GetCouleur()) 
    {
    case 0:   
        cout<< "C"<<endl;
    break;
    case 1:
        cout<< "T"<<endl;
    break;
    case 2:
        cout<< "c"<<endl;
    break;
    case 3:
        cout<< "P"<<endl;
    break;
    default: 
        cout<< "Problème";
    }
}

void Vue :: ToStringValeur(Carte* carte)
{
    switch(carte->GetValeur()) 
    {
    case 0:   
        cout<< "2";
    break;
    case 1:
        cout<< "3";
    break;
    case 2:
        cout<< "4";
    break;
    case 3:
        cout<< "5";
    break;
      case 4:   
        cout<< "6";
    break;
    case 5:
        cout<< "7";
    break;
    case 6:
        cout<< "8";
    break;
    case 7:
        cout<< "9";
    break;
      case 8:   
        cout<< "10";
    break;
    case 9:
        cout<< "A";
    break;
    case 10:
        cout<< "V";
    break;
    case 11:
        cout<< "D";
    break;
      case 12:   
        cout<< "R";
    break;
    default: 
        cout<< "Problème";
    }
}
