#include "Zombie.hpp"

int main(void)
{
	Zombie zombie("Petit Filou tube");
	Zombie *mireille;

	zombie.announce();
	randomChump("Fredo");
	mireille = newZombie("Mireille le bg");
	mireille->announce();
	delete mireille;
}