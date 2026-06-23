#pragma once

#include "weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon& Warhammer;
    public:
        HumanA(std::string name, Weapon& Warhammer);
        void    attack() const;
        ~HumanA();
};