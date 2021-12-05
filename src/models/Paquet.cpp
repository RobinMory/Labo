#include "Paquet.hpp"   

Paquet :: Paquet()
{
   for(int i = 0 ; i < 52 ; i++)
   {
       CarteL* carte = new CarteL( (Couleur) (i / 13) ,(Valeur) (i % 13));
       SetCarteFin(carte);                                                  // Mais la carte en fond de pile 
   }
}
//bonjour
Paquet :: ~Paquet(){}

void Paquet :: SetCarteFin(CarteL* linkedcarte)
{
    if (debut == nullptr)                              
    {
        debut = linkedcarte;                                                // Début de chaîne, paquet vide donc la première carte est assigné au début 
    }else 
    {
        CarteL* temp = debut;                                                   // On met la première carte dans la variable temporaire
        while(temp -> suivante != nullptr)                                                  // Tant que temp n'est pas nullptr cela voudra dire qu'une nouvelle carte va arrivé
        {
            temp = temp->suivante;                                                  // On place la variable temporaire dans son attribut suivant 
        }
        temp -> suivante = linkedcarte;                                         // On place temp dans l'attribut suivant de la linkedcarte
    }
}

CarteL* Paquet :: getDebut() const 
{
    return debut;
}

CarteL* Paquet :: getCarteByNum(int NumCarte) 
{
    CarteL* temp = this->debut;
    int index = 0;
    
    if(NumCarte==0){
        this->debut=this->debut->suivante;
        return temp;
    }else
    while (temp->suivante != nullptr && index != NumCarte)                         // je navigue dans les cartes jusqu'à arriver sur une carte random
    {
        temp = temp->suivante;
        index++;
    }
    return temp;
}


void Paquet :: MelangerPaquet()
{
    for (int i = 0; i <20 ; i++)
    {
        CarteL* temp = this->debut;
        int index = 0;
        int p = rand() % 52;
        while (index != p)                         // je navigue dans les cartes jusqu'à arriver sur une carte random
        {
            temp = temp->suivante;
            index++;
        }
        CarteL* random = temp;                                                  // je sauvegarde la valeur de cette carte dans la varibale temp
        index = 0;
        CarteL* temp2 = this->debut;
        int o = rand() % 52;
        while (index != o)          // même processus avec une autre carte
        {
            temp2 = temp2->suivante;
            index++;
        }
        CarteL* random2 = temp;                                                 // je sauvegarde cette carte dans une variable temp2
        random = temp2;                                                          // pour ensuite les intervertir
    }                                                        
}