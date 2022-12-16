#include <iostream>
using namespace std;

#include "Wizard.h"

Wizard::Wizard(const string & _name, double _health, double _strength, int _rank) : name(_name), health(_health), attackStrength(_strength), rank(_rank) {}

void Wizard::attack(Character &opp) override{
    Wizard &opp = dynamic_cast<Wizard &>(opponent);   

    if (opp.getType == "WIZARD"){
        opp.damage( (attackStrength) * (rank / opp.rank)) ;
    }
    else{
        opp.damage( (attackStrength)) ;
    }
}