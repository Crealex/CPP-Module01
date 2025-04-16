
#include "Harl.hpp"
#include <iostream>

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string tabLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;

	for(i = 0; i < 4; i++)
	{
		if (level == tabLevels[i])
		{
			break ;
		}
	}
	switch (i)
	{
		case 0:
			this->debug();
			//fallthrough
		case 1:
			this->info();
			//fallthrough
		case 2:
			this->warning();
			//fallthrough
		case 3:
			this->error();
			break;
		default:
			std::cerr << "No such complaint level" << std::endl;
	}

}