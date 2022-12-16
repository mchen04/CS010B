#ifndef ELF
#define ELF

#include "Character.h"

using namespace std;

class Elf : public Character {
    public:
        virtual void attack(Character &) = 0;
        string attack() const override {}
    private:
        string family ;
};

#endif