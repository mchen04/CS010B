#include <iostream>
using namespace std;

#include "Character.h"
#include "Wizard.h"

Wizard::Wizard(const string &name, double health, double attackStrength, int rank)
: Character(WIZARD, name, health, attackStrength) , rank(rank) {}

void Wizard::attack(Character &opponent) { 
    if (opponent.getType() == type){
        Wizard &opp = dynamic_cast<Wizard &>(opponent);
        opp.damage( ( static_cast<double>(rank) / static_cast<double>(opp.getRank())) * ( attackStrength)) ;
        return ;
    }
    opponent.damage( attackStrength ) ;
}

int Wizard::getRank() const {
    return rank ;
}