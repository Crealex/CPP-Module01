
#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombieTab = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombieTab[i].setName(name);
	}
	return (zombieTab);
}
