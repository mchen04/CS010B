#include <iostream>
using namespace std;

#include "Character.h"

Character::Character(HeroType _type, const string & _name, double _health, double _strength) : type(_type), name(_name), health(_health), attackStrength(_strength) {}

HeroType Character::getType() const{
    return type ;
}

const string & Character::getName() const{
    return name ;
}

int Character::getHealth() const{
    return (int)health ;
}

void Character::damage(double damage){
    this -> health -= damage ;
}

bool Character::isAlive() const{
    return (this -> health > 0) ;
}