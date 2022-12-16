#ifndef ELF
#define ELF

#include "Character.h"

using namespace std;

class Elf : public Character {
    public:
        virtual void attack(Character &) = 0;
    private:
        string family ;
};

#endif