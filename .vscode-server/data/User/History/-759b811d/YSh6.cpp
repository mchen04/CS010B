#include <iostream>
using namespace std;

#include "Character.h"

//Character::Character(HeroType type, const string& name, double health, double attackStrength) 
//   : type(type), name(name), health(health), attackStrength(attackStrength) {}

Character::Character(HeroType type, const string& name, double health, double attack)
{
    this->type = type;
    this->name = name;
    this->health = health;
    attackStrength = attack;
}

HeroType Character::getType() const{
    return type ;
}

const string & Character::getName() const{
    return name ;
}

int Character::getHealth() const{
    return static_cast<int>(health);
}

void Character::damage(double damage){
    health -= damage ;
}

bool Character::isAlive() const{
    return (getHealth() > 0) ;
}