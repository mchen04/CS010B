#include <iostream>
using namespace std;

#include "Wizard.h"

Wizard::Wizard(const string &name, double health, double attackStrength, int rank)
: Character(WIZARD, name, health, attackStrength) , rank(rank) {}

void Wizard::attack(Character &opponent) { 
    Wizard &opp = dynamic_cast<Wizard &>(opponent);
    if (opponent.getType() == WIZARD){
        opp.damage( (this -> rank / opp.rank) * (this -> attackStrength)) ;
    }
    else{
        opp.damage( this -> attackStrength ) ;
    }
}