#include "FragTrap.hpp"

int main(void)
{
    ClapTrap Vivi ("Vivi");
    ScavTrap Zidane ("Zidane");
    FragTrap Steiner("Steiner");
    Vivi.attack("Black Waltz 3");
    Vivi.takeDamage(5);
    Vivi.beRepaired(3);
    Zidane.guardGate();
    Zidane.attack("Black Waltz 3");
    Steiner.attack("Black Waltz 3");
    Zidane.takeDamage(20);
    Zidane.beRepaired(10);
    Steiner.takeDamage(50);
    Steiner.beRepaired(20); 
    Steiner.highFivesGuys();
    return 0;
}