
#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	Zombie *zombieTab;
	int N = 3;

	zombieTab = zombieHorde(N, "Pipou");
	for (int i = 0; i < N; i++)
	{
		std::cout << "No " << i << std::endl;
		zombieTab[i].announce();
		std::cout << std::endl;
	}
	delete[] zombieTab;
}
