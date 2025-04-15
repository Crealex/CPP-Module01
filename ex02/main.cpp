
#include <string>
#include <iostream>

int main()
{
	std::string stringVAL = "HI THIS IS BRAIN";
	std::string *stringPTR = &stringVAL;
	std::string &stringREF = stringVAL;


	std::cout << "ADRESS :" << std::endl;
	std::cout << "String value : " << &stringVAL << std::endl;
	std::cout << "String pointer : " << stringPTR << std::endl;
	std::cout << "String reference : " << &stringREF << std::endl;
	std::cout << "VALUE :" << std::endl;
	std::cout << "String value : " << stringVAL << std::endl;
	std::cout << "String pointer : " << *stringPTR << std::endl;
	std::cout << "String reference : " << stringREF << std::endl;
}