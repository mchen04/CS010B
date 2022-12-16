#include <iostream>
using namespace std;

#include "Warrior.h"

Warrior::Warrior(const string &name, double health, double attackStrength, string alli)
: Character(WARRIOR, name, health, attackStrength) , alli(alli) {}

void Warrior::attack(Character &opponent) { 
    Warrior &opp = dynamic_cast<Warrior &>(opponent);
    if (opponent.getType() == WARRIOR){
        if (opp.alli == this -> alli){
            cout << "same alli" << endl ;
        }
        else{
            opponent.damage( (this -> health / MAX_HEALTH) * (this -> attackStrength)) ;
        }
    }
    else{
        opponent.damage( (this -> health / MAX_HEALTH) * (this -> attackStrength)) ;
    }
}