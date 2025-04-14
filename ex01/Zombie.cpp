#include "Zombie.hpp"
#include "colors.h"
#include <iostream>

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << _name << GREEN << BOLD << " created !" << RESET <<std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << RED << BOLD << " destructed !" << RESET << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}