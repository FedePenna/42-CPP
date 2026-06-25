#pragma once

#include <string>
#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        const std::string& getType() const;
        void    setType(std::string type);
        Weapon(std::string type);
};