#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  private:
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

  public:
    ScavTrap(std::string name);
    ScavTrap(void);
    ScavTrap(const ScavTrap &other);
    ScavTrap &operator=(const ScavTrap &other);
    ~ScavTrap();

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void guardGate();
};