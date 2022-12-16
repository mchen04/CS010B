#ifndef ELF
#define ELF

#include "Character.h"

using namespace std;

class Elf : public Character {
    public:
     	Elf(const string &, double, double, string);
        void attack(Character &) override;
    private:
        string family ;
};

#endif