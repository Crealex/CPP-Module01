
#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	Zombie *zombieTab;

	zombieTab = zombieHorde(3, "Pipou");
	for (size_t i = 0; i < 3; i++)
	{
		std::cout << "no " << i << std::endl;
		zombieTab[i].announce();
		std::cout << std::endl;
	}
	delete zombieTab;
}