
#include "Weapon.hpp"
#include <iostream>
#include "colors.h"

Weapon::Weapon(std::string type): _type(type)
{
	//std::cout << GREEN << "Weapon created" << RESET << std::endl;
}

Weapon::~Weapon()
{
	//std::cout << RED << "Weapon destructed" << RESET << std::endl;
}

std::string Weapon::getType()
{
	return (this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}
