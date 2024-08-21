#include "iter.hpp"

void	funcInt(int const &i)
{
	// i++;
	std::cout << "bla " << i << std::endl;
}

void	funcStr(std::string &str)
{
	str += "-bla";
}

int main(void)
{
	std::cout << " --- Int test --- " << std::endl;

	int const array[] = {1,2,3};
	size_t len = sizeof(array) / sizeof(array[0]);

	iter(array, len, funcInt);
	for (size_t i = 0; i < len; i++)
		std::cout << "new array: " << array[i] << std::endl;

	std::cout << " --- String test --- " << std::endl;

	std::string strArray[] = {"hello", "world", "test"};
	size_t strLen = sizeof(strArray) / sizeof(strArray[0]);

	iter(strArray, strLen, funcStr);
	for (size_t i = 0; i < strLen; i++)
		std::cout << "new string array: " << strArray[i] << std::endl;

}
