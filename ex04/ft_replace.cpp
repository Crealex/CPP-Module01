
#include "main.hpp"

std::string ft_replace(std::string buffer, char *str1, char *str2)
{
	std::string s1(str1);
	std::string s2(str2);
	int n = 0;

	n = buffer.find(s1);
	while (n >= 0)
	{
		buffer.erase(n, s1.length());
		buffer.insert(n, s2);
		n = buffer.find(s1);
	}
	return (buffer);
}
