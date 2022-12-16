#include <iostream>
using namespace std;

#include "Wizard.h"

Wizard::Wizard(const string &name, double health, double attackStrength, int rank)
: Character(WIZARD, name, health, attackStrength) , rank(rank) {}

void Wizard::attack(Character &opp) { 
    if (opp.getType() == WIZARD){
        Wizard &opp = dynamic_cast<Wizard &>(opp);
        opp.damage( (this -> rank / opp.rank) * (this -> attackStrength)) ;
    }
    else{
        opp.damage( this -> attackStrength ) ;
    }
}