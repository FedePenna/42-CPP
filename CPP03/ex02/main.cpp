#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap Vivi ("Vivi");
    Vivi.attack("Black Waltz 3");
    Vivi.takeDamage(5);
    Vivi.beRepaired(3);
    Vivi.guardGate();
    return 0;
}