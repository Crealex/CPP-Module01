
#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	std::string tabLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Harl harl;
	int i;

	if (argc != 2)
	{
		std::cerr << "Please enter one arguements !" << std::endl;
		return (1);
	}
	std::string level = argv[1];
	for(i = 0; i < 4; i++)
	{
		if (level == tabLevels[i])
		{
			break ;
		}
	}
	if (i == 4)
	{
		std::cerr << "Invalid arguments !" << std::endl;
		return (1);
	}
	std::cout << tabLevels[i] << " :" << std::endl;
	harl.complain(tabLevels[i]);
	return (0);
}