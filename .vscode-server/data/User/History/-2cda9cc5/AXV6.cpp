#include <iostream>
using namespace std;

#include "Wizard.h"

Wizard::Wizard(const string &name, double health, double attackStrength, int rank)
: Character(WIZARD, name, health, attackStrength) , rank(rank) {}

void Wizard::attack(Character &opp) override{ 
    Wizard &opp = dynamic_cast<Wizard &>(opponent);

    if(opp.GetType == WIZARD){
        opp.damage( (rank / opp.getRank()) * (attackStrength)) ;
        cout << "warrior hitting a wizard" << endl ;
    }

    if (opp.getType() != WARRIOR){
        opp.damage( attackStrength) ;
        cout << "warrior hitting a " << opp.getName() << endl ;
    }
}