#ifndef ELF
#define ELF

#include "Character.h"

using namespace std;

class Elf : public Character {
    public:
        void attack(Character &) override;
    private:
        string family ;
};

#endif