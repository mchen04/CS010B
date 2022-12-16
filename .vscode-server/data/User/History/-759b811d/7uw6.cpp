#include <iostream>
using namespace std;

#include "Character.h"

	HeroType type;
	string name;
	double health;
	double attackStrength;

Character::Character(HeroType _type, const string & _name, double _health, double _strength) : type(_type), name(_name), health(_health), attackStrength(_strength) {}

HeroType Character::getType() const{
    return type ;
}

const Character::string & getName() const{
    return name ;
}

int Character::getHealth() const{
    return static_cast<int>health ;
}

void Character::damage(double d){
    health -= d ;
}

bool Character::isAlive() const{
    return (health > 0) ;
}

virtual void attack(Character &) = 0;