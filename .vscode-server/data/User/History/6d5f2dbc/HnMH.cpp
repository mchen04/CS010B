#include <iostream>
using namespace std;

#include "Character.h"
#include "Warrior.h"

Warrior::Warrior(string name, double health, double attack, string allegiance)
    : Character(WARRIOR, name, health, attack), allegiance(allegiance) {}

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