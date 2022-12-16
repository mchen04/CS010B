#ifndef ELF
#define ELF

#include "Character.h"

using namespace std;

class Elf : public Character {
    public:
     	Character(const string &, double, double);
        void attack(Character &) override;
    private:
        string family ;
};

#endif