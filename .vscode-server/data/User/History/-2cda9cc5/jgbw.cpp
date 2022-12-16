#include <iostream>
using namespace std;

#include "Wizard.h"

Wizard::Wizard(const string &name, double health, double attackStrength, int rank)
: Character(WIZARD, name, health, attackStrength) , rank(rank) {}

void Wizard::attack(Character &opp) { 
    Wizard &opp = dynamic_cast<Wizard &>(opponent);

    if(opp.getType() == WIZARD){
        opp.damage( (this -> rank / opp.getRank()) * (this -> attackStrength)) ;
        cout << "warrior hitting a wizard" << endl ;
    }

    if (opp.getType() != WIZARD){
        opp.damage(this -> attackStrength) ;
        cout << "warrior hitting a " << opp.getName() << endl ;
    }
}