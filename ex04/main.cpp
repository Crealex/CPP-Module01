
#include "main.hpp"

int main(int argc, char **argv)
{
	std::ifstream src;
	std::ofstream dest;
	std::string buffer;

	if (argc != 4)
	{
		std::cerr << RED << "Please launch the programm with the excepted arguments :" << RESET << std::endl;
		std::cerr << "./sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	src.open(argv[1]);
	if (!src.is_open())
	{
		std::cerr << RED << "Please enter a valid name file" << RESET << std::endl;
		return (1);
	}
	dest.open("dest.txt");
	if (!dest.is_open())
	{
		std::cerr << RED << "Error with the opening of dest.txt" << RESET << std::endl;
		src.close();
		return (1);
	}
	while (1)
	{
		std::getline(src, buffer);
		if (buffer.empty())
			break ;
		buffer = ft_replace(buffer, argv[2], argv[3]);
		dest << buffer;
		dest << std::endl;
	}
	src.close();
	dest.close();
	return (0);
}
