#include <iostream>
using namespace std;

#include "Character.h"
#include "Warrior.h"

Warrior::Warrior(const string &name, double health, double attackStrength, string alli)
: Character(WARRIOR, name, health, attackStrength) , alli(alli) {}

void Warrior::attack(Character &opponent) { 
    if (opponent.getType() == WARRIOR){
        Warrior &opp = dynamic_cast<Warrior &>(opponent);
        if (opp.alli == this -> alli){
            cout << "same alli" << endl ;
            return ;
        }
    }
    opponent.damage( (this -> health / MAX_HEALTH) * (this -> attackStrength)) ;
}

string Warrior:getAllegiance() const {
    return alli ;
}