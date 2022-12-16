#include <iostream>
using namespace std;

#include "Character.h"
#include "Warrior.h"

Warrior::Warrior(const string &name, double health, double attackStrength, string alli)
: Character(WARRIOR, name, health, attackStrength) , alli(alli) {}

void Warrior::attack(Character &opponent) { 
    if (opponent.getType() == type){
        Warrior &opp = dynamic_cast<Warrior &>(opponent);
        if (opp.getAllegiance() ==  alli){
            cout << "same alli" << endl ;
            return ;
        }
    }
    opponent.damage( ( health / MAX_HEALTH) * (attackStrength)) ;
}

string Warrior::getAllegiance() const {
    return alli ;
}