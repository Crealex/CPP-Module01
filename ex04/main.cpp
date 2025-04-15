
#include "main.hpp"

int main(int argc, char **argv)
{
	std::ifstream src;
	std::ofstream dest;
	std::string buffer;

	if (argc != 4)
	{
		std::cout << RED << "Please launch the programm with the excepted arguments :" << RESET << std::endl;
		std::cout << "./sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	src.open(argv[1]);
	std::getline(src, buffer);
	dest.open("dest.txt");
	buffer = ft_replace(buffer, argv[2], argv[3]);
	dest << buffer;
	src.close();
	dest.close();
	return (0);
}