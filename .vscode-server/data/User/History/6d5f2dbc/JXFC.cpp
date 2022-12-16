#include <iostream>
using namespace std;

#include "Character.h"
#include "Warrior.h"

Warrior::Warrior(const string & name, double health, double attack, string allegiance)
    : Character(HeroType type = WARRIOR, name, health, attack), allegiance(allegiance) {}

void Warrior::attack(Character &opponent) { 
    if (opponent.getType() == type){
        Warrior &opp = dynamic_cast<Warrior &>(opponent);
        if (opp.getAllegiance() ==  allegiance){
            cout << "same alli" << endl ;
            return ;
        }
    }
    opponent.damage( ( health / MAX_HEALTH) * (attackStrength)) ;
}

string Warrior::getAllegiance() const {
    return allegiance ;
}