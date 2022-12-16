#include <iostream>
using namespace std;

#include "Character.h"

	HeroType type;
	string name;
	double health;
	double attackStrength;

Character::Character(HeroType _type, const string & _name, double _health, double){
    type = _type ;
    name = _name ;
}


HeroType Character::getType() const{

}

const Character::string & getName() const{

}

int Character::getHealth() const{

}

void Character::damage(double d){

}

bool Character::isAlive() const{

}

virtual void attack(Character &) = 0;