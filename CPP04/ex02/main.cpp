#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal* animals[4];

	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();
	// new Animal(); // This line will cause a compilation error because Animal is an abstract class

	for (int i = 0; i < 4; i++)
	{
		std::cout << animals[i]->getType() << " " << std::endl;
		animals[i]->makeSound();
	}
	for (int i = 0; i < 4; i++)
		delete animals[i];
	std::cout << "|Test Del Deep Copy|" << std::endl;
	Dog Toby;
	Toby.getBrain()->setIdea(0, "I want to play fetch!");
	Dog Max = Toby; // Copy constructor
	std::cout << "Toby's idea: " << Toby.getBrain()->getIdea(0) << std::endl;
	std::cout << "Max's idea: " << Max.getBrain()->getIdea(0) << std::endl;
	Max.getBrain()->setIdea(0, "I want to chase squirrels!");
	std::cout << "After changing Max's idea:" << std::endl;
	std::cout << "Toby's idea: " << Toby.getBrain()->getIdea(0) << std::endl;
	std::cout << "Max's idea: " << Max.getBrain()->getIdea(0) << std::endl;

	return (0);
}