#include "Zombie.hpp"

int main()
{
    Zombie *zombie1 = new Zombie("San Pancrazio");
    zombie1->announce();
    delete zombie1;

    Zombie zombie2("Zombie2");
    zombie2.announce();

    Zombie *zombie3 = zombie2.newZombie("Zombie3");
    zombie3->announce();
    delete zombie3;

    zombie2.randomChump("Zombie4");

    return 0;
}