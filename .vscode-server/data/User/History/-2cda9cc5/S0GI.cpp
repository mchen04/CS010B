#include <iostream>
using namespace std;

#include "Wizard.h"

Wizard::Wizard(const string &name, double health, double attackStrength, string alli)
: Character(WIZARD, name, health, attackStrength) , alli(alli) {}

void Warrior::attack(Character &opp) override{ 
    Warrior &opp = dynamic_cast<Warrior &>(opponent);

    if(opp.GetType == WARRIOR){
        cout << "warrior on warrior stuff" << endl ;
    }

    if (opp.getType() != WARRIOR){
        opp.damage( (health * MAX_HEALTH) * (attackStrength)) ;
        cout << "warrior hitting a " << opp.getName() ;
    }
}