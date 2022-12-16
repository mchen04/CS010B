#ifndef WIZARD
#define WIZARD

#include "Character.h"

using namespace std;

class Wizard : public Character {
    public:
     	Wizard(const string &, double, double, int);
        void attack(Character &) override;
    private:
        string family ;
};

#endif