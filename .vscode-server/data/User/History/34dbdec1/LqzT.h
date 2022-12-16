#ifndef Warrior
#define Warrior

#include "Character.h"

using namespace std;

class Warrior : public Character {
    public:
     	Warrior(const string &, double, double, string);
        void attack(Character &) override;
    private:
        string allegiance ;
};

#endif