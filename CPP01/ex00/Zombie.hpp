# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie *newZombie(std::string name);
        ~Zombie();
        void announce();
        void randomChump(std::string name);
        Zombie(std::string name);
};
#endif