
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
	void (Harl::*tabFct[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for(int i = 0; i < 4; i++)
	{
		if (level == tabLevels[i])
		{
			(this->*tabFct[i])();
			return;
		}
	}
	std::cerr << "No such complaint level" << std::endl;
}