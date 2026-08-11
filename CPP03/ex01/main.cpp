#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap Vivi ("Vivi");
    ScavTrap Zidane ("Zidane");
    Vivi.attack("Black Waltz 3");
    Zidane.attack("Kuja");
    Vivi.takeDamage(5);
    Vivi.beRepaired(3);
    Zidane.guardGate();
    Zidane.takeDamage(10);
    Zidane.beRepaired(5);
    return 0;
}