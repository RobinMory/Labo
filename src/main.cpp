#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include "controllers/Controleur.hpp"

using namespace std;

int main()
{
    srand(time(NULL));
    Controleur controleur;
    controleur.afficheCommencement();
   
    return 0;
}