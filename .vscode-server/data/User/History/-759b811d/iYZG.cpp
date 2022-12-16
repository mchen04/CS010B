#include <iostream>
using namespace std;

#include "Character.h"

Character::Character(HeroType type, const string &name, double health, double attackStrength) 
: Hero(type), name(name), health(health), attackStrength(attackStrength){

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